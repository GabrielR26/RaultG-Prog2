using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

[CreateAssetMenu(fileName = "DialogSystem asset")]
public class DialogSystem : ScriptableObject
{
    [SerializeField] string title = "Dialog";
    [SerializeField] int id = 0;
    [SerializeField] List<DialogSystemQuote> quotes = new();
    //[SerializeField, HideInInspector] Rect dialogRect = new Rect(200,200,300,150);

    public string Name { get => name; set => name = value; }
    public int Id { get => id; set => id = value; }
    public List<DialogSystemQuote> Quotes => quotes;

    public DialogSystem(string _name = "Dialog", int _id = 0)
    {
        name = _name;
        id = _id;
    }

    public void AddQuotes(Rect _window)
    {
        DialogSystemQuote _quote = new DialogSystemQuote($"{Name}{Quotes.Count}", Quotes.Count);
        Quotes.Add(_quote);
    }
    public void ClearQuotes()
    {
        for (int i = 0; i < Quotes.Count; i++)
            Quotes[i] = null;
        Quotes.Clear();
    }
}
