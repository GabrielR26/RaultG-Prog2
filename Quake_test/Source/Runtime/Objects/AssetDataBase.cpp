//#include "AssetDataBase.h"
//#include <filesystem>
//#include <fstream>
//
//
//void AssetDataBase::CreateAsset(UObject* _asset, FString _path)
//{
//    //if (_path.StartWith("Assets"))
//    //{
//    //    const string _assetPath = filesystem::current_path().string();
//    //    _path = FString((_assetPath + "/" + _path.GetText()).c_str());
//    //}
//
//    ofstream _stream = ofstream(_path.GetText());
//    _asset->Serialize(_stream);
//    _stream.close();
//}
//
//vector<UObject*> AssetDataBase::LoadAllAssets()
//{ 
//    vector<UObject*> _res = vector<UObject*>();
//    const string _path = format("{}/Asset/", filesystem::current_path().string());
//    for (const filesystem::directory_entry& _entry : filesystem::recursive_directory_iterator(_path))
//    {
//        FString _className = ReadAllLines(_entry.path().string())[0];
//        _className.Replace("\"", ""); 
//        _className.RemoveAt(0, _className.FindChar(' '));
//        _className = _className.Trim();
//        UObject* _data = TypeOfData::Types[_className.GetText()]->Clone();
//        ifstream _stream(_entry.path());
//        _data->DeSerialize(_stream);
//        _res.emplace_back(_data);
//        if (!AllObjectsPath.contains(_data))
//            AllObjectsPath.insert(pair(_data, _entry.path().string()));
//    }
//    return _res;
//}
//
//string AssetDataBase::GetAssetPath(UObject* _obj)
//{
//    if (!AllObjectsPath.contains(_obj))
//        throw exception("Asset doesn't exist !");
//    return AllObjectsPath[_obj];
//}
//
//vector<FString> AssetDataBase::ReadAllLines(const string& _path)
//{
//    ifstream _stream = ifstream(_path);
//    string _line = "";
//    vector<FString> _res = vector<FString>();
//    while (getline(_stream, _line))
//        _res.emplace_back(_line.c_str());
//    _stream.close();
//    return _res;
//}
