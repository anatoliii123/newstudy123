There is total of 3 categories:

## GAME APPLICATION LAYER:
* Devices - Input, Files, Ram, Time.
* Operating System - Language, DLL, Threads, Network.
* Game Lifetime - Core Libs, Main Loop, Init & Shutdown
* Managing Memory - write your own memory manager to handle allocations of various sizes.
Other...
* The system clock
* String handling
* DLLs
* Threads and thread synchronization
* Network communications
* Initialization
* Main Loop
* Shutdown

## GAME LOGIC:
* Game State & Data Structures
* Physics & Collision - 
* Events - game logic makes changes in game state, creating or moving an object, number of game systems will respond

* Process manager - keeps a list of processes acting on your game objects and gives each one a little CPU time by
calling it once every game loop.

* Command interpreter - the game view presents an interface to the human player that changes the "Button A is pressed"
state into a game command, "Set Emergency Brake." That comamnd is sent to the game logic, game logic changes the state
on the data structure.


## GAME VIEW:
* Display - 3D Scenes, User Interface, Video. || Render 3D Polygons, Sprites to make a game scene || rendering a
user interface layer on top of the scene || maybe even rendering Streaming Video.

* Audio - SFX, Music, Speech. || load a WAV file and send it int oDirectX with volume and looping parameters

* Input interpreter
* Process manager - game view uses their own process manager to handle everything from button animations
to streaming audio and video.

* Options - sound effect volume, if controls are Y-inverted or not, resolution option, usually they go
in a .ini file, cak be easily tweaked.

* Multiplayer Games - each view needs to share what is likely a single display from the application layer
and figureo out how to iterate the additional controls, attach more human views to the same game logic
harder is to build overall architecture to support Multiplayer

* AI Agent - Stimulus Interpreter - events like other game views object movement, collisions, and so on
,            Decision System - subsystem depend on what commands AI agent can send into the game.
,            Process Manager - 
             Options

## Network Game architecture

     Authoritive Server:
     [Game Logic] <--  Game State & Commands   --> [Human Game View]
     [Game Logic] <-- Game State & Commands    --> [Remote Game View]
     
     [Authoritive Server] <-- TCP and/or UDP --> [Remote Game Client]

     Remote Game Client:
     [Remote Game Logic] <-- Game State & Commands --> [Human Game View]
     
     * Remote Game View - on the server machine, the remote player should appear just like an AI agent
     the remote view receives game events from the game logic and responds with commands back to the
     game logic. What happens in the remote view is completely different from the AI agent view or the human view.
     Game events are packaged up and sent via TCP, UDP, or both, to a client computer accross the Network
     The remote game view also receives IP traffic from the remote machine, namely the game commands that
     result from controller input.

     * Remote Game Logic - game logic is an Authoritive server, its game state is the final word on what
     is happening in the game. client machines need a copy of the game state, and a way to manage delays
     in internet traffic, this is job of the game logic, game logic is similar to the authoritive, contains
     everything it needs to simulate teh game.


