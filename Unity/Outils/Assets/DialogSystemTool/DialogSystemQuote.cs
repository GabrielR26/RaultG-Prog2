using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogSystemQuote
{
    string name = "Quote";
    int id = 0;
    string sentence = string.Empty;
    List<DialogSystemAnswer> answers = new();

    public string Name { get => name; set => name = value; }
    public int Id { get => id; set => id = value; }
    public string Sentence { get  => sentence; set => sentence = value; }
    public List<DialogSystemAnswer> Answers => answers;

    public DialogSystemQuote(string _name = "Quote", int _id = 0, string _sentence = "")
    {
        name = _name;
        id = _id;
        sentence = _sentence;
    }

    public void AddAnswer()
    {
        DialogSystemAnswer _answer = new DialogSystemAnswer("Quote", Answers.Count);
        Answers.Add(_answer);
    }
    public void ClearAnswers()
    {
        for (int i = 0; i < Answers.Count; i++)
            Answers[i] = null;
        Answers.Clear();
    }
}
