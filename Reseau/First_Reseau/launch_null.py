
import os

ini = open(os.path.dirname(__file__) + "\Config\DefaultEngine.ini", "r")
content = ini.read()

content = content.replace("DefaultPlatformService=Steam", "DefaultPlatformService=NULL")

if (content.__contains__("[OnlineSubsystemSteam]\nbEnabled")):
    content = content.replace("[OnlineSubsystemSteam]\nbEnabled=true", "[OnlineSubsystemSteam]\nbEnabled=false")

ini = open(os.path.dirname(__file__) + "\Config\DefaultEngine.ini", "w")
ini.write(content)

batch = os.path.dirname(__file__) + "\launch_online.bat"
os.startfile(batch)