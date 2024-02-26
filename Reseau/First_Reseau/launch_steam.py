
import os

ini = open(os.path.dirname(__file__) + "\Config\DefaultEngine.ini", "r")
content = ini.read()

content = content.replace("DefaultPlatformService=NULL", "DefaultPlatformService=Steam")

if (content.__contains__("[OnlineSubsystemSteam]\nbEnabled")):
    content = content.replace("[OnlineSubsystemSteam]\nbEnabled=false", "[OnlineSubsystemSteam]\nbEnabled=true")

ini = open(os.path.dirname(__file__) + "\Config\DefaultEngine.ini", "w")
ini.write(content)

batch = os.path.dirname(__file__) + "\launch_online.bat"
os.startfile(batch)