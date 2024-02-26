
import os
import unreal
from  unreal import *
from PySide6 import QtWidgets as QtW
from PySide6.QtCore import Qt
from PySide6.QtWidgets import QWidget

class online_system(QtW.QWidget):
    def __init__(self):
        super().__init__()
        self.init_system()
        self.init_ui()
        self.draw_ui()
        self.bind_ui()

    def init_system(self):
        registry = unreal.Paths.project_config_dir()
        self.path_ini = registry + "DefaultEngine.ini"

    def init_ui(self):
        self.setWindowTitle("Choose online system")
        self.setFixedSize(300, 100)
        self.main_layout = QtW.QVBoxLayout(self)

    def draw_ui(self):
        self.btn_null = QtW.QPushButton("Null")
        self.btn_steam = QtW.QPushButton("Steam")
        self.main_layout.addWidget(self.btn_null)
        self.main_layout.addWidget(self.btn_steam)

    def bind_ui(self):
        self.btn_null.clicked.connect(self.null_system)
        self.btn_steam.clicked.connect(self.steam_system)

    def null_system(self):
        ini = open(self.path_ini, "r") 
        content = ini.read()
        content = content.replace("DefaultPlatformService=Steam", "DefaultPlatformService=NULL")
        if (content.__contains__("[OnlineSubsystemSteam]\nbEnabled")):
            content = content.replace("[OnlineSubsystemSteam]\nbEnabled=true", "[OnlineSubsystemSteam]\nbEnabled=false")
        ini = open(self.path_ini, "w")
        ini.write(content)

    def steam_system(self):
        ini = open(self.path_ini, "r") 
        content = ini.read()
        content = content.replace("DefaultPlatformService=NULL", "DefaultPlatformService=Steam")
        if (content.__contains__("[OnlineSubsystemSteam]\nbEnabled")):
            content = content.replace("[OnlineSubsystemSteam]\nbEnabled=false", "[OnlineSubsystemSteam]\nbEnabled=true")
        ini = open(self.path_ini, "w")
        ini.write(content)

###Program
inst = QtW.QApplication.instance() if QtW.QApplication.instance() else QtW.QApplication()
app = online_system()
app.show()
