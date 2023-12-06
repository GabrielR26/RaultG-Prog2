using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogSystemAnswer
{
    string name = "Answer";
    int id = 0;
    string sentence = string.Empty;

    public string Name { get => name; set => name = value; }
    public int Id { get => id; set => id = value; }
    public string Sentence { get => sentence; set => sentence = value; }

    public DialogSystemAnswer(string _name = "Answer", int _id = 0, string _sentence = "")
    {
        name = _name;
        id = _id;
        sentence = _sentence;
    }

}
