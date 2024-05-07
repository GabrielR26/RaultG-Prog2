#include "ChatBox.h"
#include "FileLoader.h"

ChatBox::ChatBox()
{
    text = string();
    cmds = false;
    clts = false;
    index = 0;
    saves.push_back("");
}

void ChatBox::DisplayText(const string& _msg)
{
    Display(_msg, CYAN);
    Display("==============", WHITE);

    if (cmds)
        DisplayCommands(_msg);
    if (clts)
        DisplayClients(_msg);
    tabs = false;
}

void ChatBox::DisplayCommands(const string& _msg)
{
    commands.clear();
    string _cmd = _msg.substr(1, string::npos);

    try
    {
        FindValidWords(FILE_CMDS, _cmd, commands);
    }
    catch (const string& _error)
    {
        system("CLS");
        Display(_error, RED);
    }
    
    size_t _cmdsSize = commands.size();
    for (size_t i = 0; i < _cmdsSize; i++)
        Display(commands[i], GRAY);
}

void ChatBox::DisplayClients(const string& _msg)
{
    clients.clear();
    size_t _size = _msg.size() - 4;
    string _name = _msg.substr(4, _size);
    _name = Trim(_name);

    try
    {
        FindValidWords(FILE_CLIENT, _name, clients);
    }
    catch (const string& _error)
    {
        system("CLS");
        Display(_error, RED);
    }

    size_t _clientsSize = clients.size();
    for (size_t i = 0; i < _clientsSize; i++)
        Display(clients[i], GRAY);
}

void ChatBox::CheckCommand(const string& _msg)
{
    if (_msg.empty())
        return;

    if (tabs && clients.size() == 1)
    {
        text = "/msg " + clients[0];
        return;
    }

    if (tabs && commands.size() == 1)
    {
        text = "/" + commands[0];
        return;
    }

    string _cmd = _msg.substr(1, 4);
    if (cmds && _cmd == "msg ")
        clts = true;
    else
        clts = false;
}

TextData ChatBox::GetFilePath(const string& _message) const
{
    if (_message.find('/') != string::npos)
        return { FILE_CMDS, 1 };

    return { FILE_CMDS, 0 };
}

void ChatBox::Open(string& _msg)
{
    bool toQuit = false;
    char _letter;
    text = "";

    system("CLS");
    Display("ChatBox", DARK_ORANGE);

    do
    {
        _letter = _getche();
        system("CLS");

        if (_letter == '\r')
            toQuit = true;

        if (_letter == '\t')
            tabs = true;

        if (_letter == '\b' && !text.empty())
        {
            if (text[text.size() - 1] == '/')
                cmds = false;
            text.erase(text.end() - 1);
        }
        else if (!tabs)
            text.push_back(_letter);

        if (_letter == '/')
            cmds = true;

        if (buffer == -32 && _letter == 72) //Up arrow
        {
            index = index == saves.size() - 1 ? index : index + 1;
            text.clear();
            text = saves[index];
        }
        else if (buffer == -32 && _letter == 80) //Down arrow
        {
            index = index == 0 ? index : index - 1;
            text.clear();
            text = saves[index];
        }

        CheckCommand(text);
        DisplayText(text);

        buffer = _letter;
    } while (!toQuit);

    saves.push_back(text);
    _msg = text;

    system("CLS");
}
