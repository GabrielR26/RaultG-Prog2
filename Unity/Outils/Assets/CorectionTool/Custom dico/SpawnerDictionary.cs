using System;
using System.Collections.Generic;
using UnityEngine;

public struct SpawnKeyValuePair<TKey, TValue>
{
    [SerializeField] TKey key;
    [SerializeField] TValue _value;

    public TKey Key { get => key; set => key = value; }
    public TValue Value { get => _value; set => _value = value; }
}

[Serializable]
public class SpawnerDictionary<TKey, TValue>
{
    [SerializeField] List<SpawnKeyValuePair<TKey, TValue>> pair = new();

    public List<SpawnKeyValuePair<TKey, TValue>> Pair => pair;
    public TValue this[TKey _key] => Get(_key);

    public void Add(TKey _key, TValue _value)
    {
        if (ContainsKey(_key))
            return;
        Pair.Add(new SpawnKeyValuePair<TKey, TValue>() { Key = _key, Value = _value });
    }
    public bool ContainsKey(TKey _key)
    {
        for (int i = 0; i < Pair.Count; i++)
            if (Pair[i].Key.Equals(_key))
                return true;
        return false;
    }
    TValue Get(TKey _key)
    {
        for (int i = 0; i < Pair.Count; i++)
            if (Pair[i].Key.Equals(_key))
                return Pair[i].Value;
        return default;
    }
}
