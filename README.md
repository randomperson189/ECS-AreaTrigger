# ECS-AreaTrigger
This is an ECS implementation of AreaTrigger.

## How to install the plugin to your project:

1. Download the files in this repository (either by cloing or via zip download)
2. Open the **bin** folder and then inside that, move the two folders called **win_x64** and **win_x64_release** into your CryEngine 5 project's **bin** folder (don't replace if prompted)
3. Open your CryEngine 5 project's **Game.cryproject** in a text editor and look for this line
```
{
  "guid": "",
  "type": "EType::Native",
  "path": "bin/win_x64/Game.dll"
}
```
4. Add a new entry underneath so that it now looks like this
```
{
  "guid": "",
  "type": "EType::Native",
  "path": "bin/win_x64/Game.dll"
},
{
  "guid": "",
  "type": "EType::Native",
  "path": "bin/win_x64/ECSAreaTrigger.dll"
},
```

## How to use it in Sandbox:

1. Add the **Area Trigger** component to an Entity (preferably an Area Entity)
2. In the **Attached Entities** category at the top, use the Pick button to select the Areas you want to become a trigger 
3. Open the Entity's FlowGraph and create the **AreaTrigger** node which can be found in **Entity > AreaTrigger**
4. Right click the red area where it says **Choose Entity** and then click **Assign Graph Entity**
