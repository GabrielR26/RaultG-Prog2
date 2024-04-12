#include "ChatBox.h"
#include "FileLoader.h"

ChatBox::ChatBox()
{
    text = string();
    cmds = false;
    clts = false;
}

void ChatBox::DisplayText(const string& _msg)
{
    Display(_msg, CYAN);
    Display("==============", WHITE);

    if (cmds)
        DisplayCommands(_msg);
    if (clts)
        DisplayClients(_msg);
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
    string _name = _msg.substr(4, string::npos);
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
    if (cmds && Contains(_msg, "msg"))
        clts = true;
    else
        clts = false;
}

void ChatBox::Open(string& _msg)
{
    bool toQuit = false;
    char _letter;
    _msg = string();

    system("CLS");
    Display("ChatBox", DARK_ORANGE);

    do
    {
        _letter = _getch();
        system("CLS");

        if (_letter == '\r')
            toQuit = true;

        if (_letter == '\b' && !_msg.empty())
        {
            if (_msg[_msg.size() - 1] == '/')
                cmds = false;
            _msg.erase(_msg.end() - 1);
        }
        else
            _msg.push_back(_letter);

        if (_letter == '/')
            cmds = true;

        if (_letter == '\t')
            tabs = true;

        if (_letter == 0x26) //Up arrow ??
        {
            _msg.clear();
            _msg.append(save);
        }

        CheckCommand(_msg);
        DisplayText(_msg);
    } while (!toQuit);

    save = _msg;

    system("CLS");
}
