using System;
using System.Diagnostics;
using System.IO;
using System.Windows;

namespace DemoWPF
{
    public class FileData
    {
        public string Name { get; private set; }
        public string FilePath { get; private set; }
        public string Extension { get; private set; }
        public FileData(string _path)
        {
            FilePath = _path;
            Extension = Path.GetExtension(_path);
            Name = Path.GetFileNameWithoutExtension(_path);
        }

        public void Open()
        {
            try
            {
                Process.Start(FilePath);
            }
            catch (FileNotFoundException _fe)
            {
                MessageBox.Show(_fe.Message);
            }
            catch (System.Exception _e)
            {
                MessageBox.Show(_e.Message);
            }
        }
        public static bool operator !(FileData _this) => _this == null;
    };

    internal class Explorer
    {
        public void GetAllDirectories(string _path)
        {
            string[] _files = Directory.GetDirectories(_path);

            //for (int i = 0; i < _files.Length; i++)
            //    _value += _files[i] + "\n";
        }
        public FileData[] GetAllFiles(string _path)
        {
            if (!Directory.Exists(_path))
                return null;

            string[] _files = Directory.GetFiles(_path, "*.*");
            FileData[] _data = new FileData[_files.Length];

            for (int i = 0; i < _files.Length; i++)
                _data[i] = new FileData(_files[i]);

            return _data;
        }
    }
}
