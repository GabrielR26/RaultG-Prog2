#include "ChatBox.h"

ChatBox::ChatBox()
{
    text = string();
}

void ChatBox::DisplayText(const string& _msg) const
{
    Display(_msg, LIGHT_GRAY);
    Display("==============", WHITE);
}

void ChatBox::GetFilePath() const
{
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
            _msg.erase(_msg.end() - 1);
        else
            _msg.push_back(_letter);

        DisplayText(_msg);
    } while (!toQuit);

    system("CLS");
}
