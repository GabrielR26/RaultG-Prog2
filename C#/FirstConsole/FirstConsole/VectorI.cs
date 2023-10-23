using System;
using System.Reflection;

namespace FirstConsole
{
    internal class Dynamic<T>
    {
        T[] collection = null;

        public T this[int _index] => collection[_index];

        public int Count => collection.Length;

        public Dynamic()
        {
            collection = new T[0];
        }

        public void Add(T _val)
        {
            T[] _copy = collection;
            collection = new T[_copy.Length + 1];
            for (int i = 0; i < _copy.Length; i++)
                collection[i] = _copy[i];
            collection[_copy.Length] = _val;
        }
        public void AddAt(T _val, int _index)
        {
            if (_index < 0 || _index > collection.Length)
                return;
            T[] _copy = collection;
            collection = new T[_copy.Length + 1];
            for (int i = 0; i < _index; i++)
                collection[i] = _copy[i];
            collection[_index] = _val;
            for (int i = _index; i < _copy.Length; i++)
                collection[i + 1] = _copy[i];
        }
        public void Remove(T _value)
        {
            for (int i = 0; i < Count - 1; i++)
                if (collection[i].Equals(_value))
                {
                    RemoveAt(i);
                    return;
                }            
        }
        public void RemoveAll(T _value)
        {
            while (Contains(_value))
                Remove(_value);
        }
        public void RemoveAt(int _index)
        {
            if (_index < 0 || _index > collection.Length)
                return;
            T[] _copy = collection;
            collection = new T[_copy.Length - 1];
            for (int i = 0; i < _index; i++)
                collection[i] = _copy[i];
            for (int i = _index; i < collection.Length; i++)
                collection[i] = _copy[i + 1];
        }
        public T At(int _index)
        {
            //if (_index < 0 || _index > collection.Length)
            //    return null;
            return collection[_index];
        }
        public void Clear()
        {
            collection = null;
        }
        public bool Contains(T _val)
        {
            for (int i = 0; i < collection.Length; i++)
                if (collection[i].Equals(_val))
                    return true;
            return false;
        }
        public void Display()
        {
            for (int i = 0; i < collection.Length; i++)
                Console.WriteLine($"{i}. {collection[i]}");
        }

        public static Dynamic<T> operator +(Dynamic<T> _this, T _val)
        {
            _this.Add(_val);
            return _this;
        }
    }
}
