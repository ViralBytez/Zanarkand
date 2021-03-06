#include "_Treasure.h"

std::vector<TreasureObject> _Treasure = {
	{ 0xD2CC7E, 3, TreasureType::CHEST, "Besaid - Valley", "Pheonix Down", 1, "", false },
	{ 0xD2CC7E, 4, TreasureType::CHEST, "Besaid - Valley", "Hi-Potion", 1, "", false },
	{ 0xD2CC7E, 5, TreasureType::CHEST, "Besaid - Valley", "Antidote", 2, "", false },
	{ 0xD2CC80, 2, TreasureType::CHEST, "Moonflow - South Bank Road", "X-Potion", 1, "", false },
	{ 0xD2CC80, 3, TreasureType::CHEST, "Moonflow - South Wharf", "Pheonix Down", 2, "", false },
	{ 0xD2CC80, 4, TreasureType::CHEST, "Moonflow - South Wharf", "Gil", 5000, "", false },
	{ 0xD2CC80, 5, TreasureType::CHEST, "Moonflow - North Wharf", "Ether", 1, "", false },
	{ 0xD2CC80, 6, TreasureType::CHEST, "Moonflow - North Bank", "Antidote", 4, "", false },
	{ 0xD2CC80, 7, TreasureType::CHEST, "Moonflow - North Bank Road", "Mega-Potion", 1, "", false },
	{ 0xD2CC81, 3, TreasureType::CHEST, "Bevelle - Via Purifico", "Rematch", 1, "", true },
	{ 0xD2CC81, 4, TreasureType::CHEST, "Bevelle - Via Purifico", "Avenger", 1, "", true },
	{ 0xD2CC82, 0, TreasureType::CHEST, "Bevelle - Via Purifico", "Elixir", 1, "", true },
	{ 0xD2CC82, 1, TreasureType::CHEST, "Bevelle - Via Purifico", "Wht Magic Sphere", 1, "", true },
	{ 0xD2CC82, 2, TreasureType::CHEST, "Bevelle - Via Purifico", "Skill Sphere", 1, "", true },
	{ 0xD2CC82, 3, TreasureType::CHEST, "Bevelle - Via Purifico", "Gil", 10000, "", true },
	{ 0xD2CC82, 4, TreasureType::CHEST, "Bevelle - Via Purifico", "Lucid Ring", 1, "", true },
	{ 0xD2CC82, 5, TreasureType::CHEST, "Bevelle - Via Purifico", "Blk Magic Sphere", 1, "", true },
	{ 0xD2CC82, 6, TreasureType::CHEST, "Bevelle - Via Purifico", "Mega-Potion", 1, "", true },
	{ 0xD2CC83, 3, TreasureType::CHEST, "Moonflow - South Bank Road", "Lv. 1 Key Sphere", 3, "", false },
	{ 0xD2CC83, 4, TreasureType::CHEST, "Moonflow - South Bank Road", "Lv. 1 Key Sphere", 3, "", false },
	{ 0xD2CC83, 5, TreasureType::CHEST, "Moonflow - South Bank Road", "Magic Def Sphere", 1, "", false },
	{ 0xD2CD0C, 0, TreasureType::CHEST, "Highroad - South End", "Ice Brand", 1, "", false },
	{ 0xD2CD0C, 1, TreasureType::CHEST, "Highroad - Oldroad, South", "Fortune Sphere", 1, "", false },
	{ 0xD2CD0C, 2, TreasureType::CHEST, "Highroad - Oldroad, North", "Thunder Blade", 1, "", false },
	{ 0xD2CD0C, 3, TreasureType::CHEST, "Highroad - Oldroad, North", "Scount", 1, "", false },
	{ 0xD2CD0C, 4, TreasureType::CHEST, "Highroad - Newroad, North", "Heat Lance", 1, "", false },
	{ 0xD2CD0C, 5, TreasureType::CHEST, "Highroad - North End", "Hi-Potion", 2, "", false },
	{ 0xD2CD0C, 6, TreasureType::CHEST, "Highroad - South", "Remedy", 1, "", false },
	{ 0xD2CD0C, 7, TreasureType::CHEST, "Highroad - Central", "Gil", 2000, "", false },
	{ 0xD2CD0D, 0, TreasureType::CHEST, "Highroad - Central", "Eye Drop", 3, "", false },
	{ 0xD2CD0D, 1, TreasureType::CHEST, "Highroad - Oldroad, South", "Mars Crest", 1, "Key Item", false },
	{ 0xD2CD0E, 0, TreasureType::CHEST, "Mushroom Rock", "Soft", 4, "", false },
	{ 0xD2CD0E, 1, TreasureType::CHEST, "Mushroom Rock - Valley", "Gil", 1000, "", false },
	{ 0xD2CD0E, 2, TreasureType::CHEST, "Mushroom Rock - Valley", "Hi-Potion", 1, "", false },
	{ 0xD2CD0E, 3, TreasureType::CHEST, "Mushroom Rock - Valley", "Remedy", 1, "", false },
	{ 0xD2CD0E, 4, TreasureType::CHEST, "Mushroom Rock - Ridge", "Serene Bracer", 1, "", true },
	{ 0xD2CD0E, 5, TreasureType::CHEST, "Mushroom Rock - Ridge", "Mega-Potion", 1, "", true },
	{ 0xD2CD0E, 6, TreasureType::CHEST, "Mushroom Rock - Aftermath", "Hi-Potion", 1, "", false },
	{ 0xD2CD0E, 7, TreasureType::CHEST, "Mushroom Rock - Precipice", "Serene Armlet", 1, "", false },
	{ 0xD2CD10, 0, TreasureType::CHEST, "Macalania Woods - South", "Gil", 2000, "", false },
	{ 0xD2CD10, 1, TreasureType::CHEST, "Macalania Woods - South", "Sleepy Cait Sith", 1, "", false },
	{ 0xD2CD10, 2, TreasureType::CHEST, "Macalania Woods - Central", "MP Sphere", 1, "Prize for Butterfly Hunt before battle with Spherimorph", true },
	{ 0xD2CD10, 3, TreasureType::CHEST, "Macalania Woods - Central", "Phoenix Down", 3, "", false },
	{ 0xD2CD10, 4, TreasureType::CHEST, "Macalania Woods - North", "Ether", 1, "Prize for Butterfly Hunt before battle with Spherimorph", true },
	{ 0xD2CD10, 5, TreasureType::CHEST, "Macalania Woods - North", "Remedy", 1, "", false },
	{ 0xD2CD10, 6, TreasureType::CHEST, "Macalania Woods - Campsite", "Lucid Ring", 1, "", false },
	{ 0xD2CD11, 0, TreasureType::CHEST, "Calm Lands - South", "Gil", 10000, "", false },
	{ 0xD2CD11, 1, TreasureType::CHEST, "Calm Lands - South", "Gil", 5000, "", false },
	{ 0xD2CD11, 2, TreasureType::CHEST, "Calm Lands - Central", "Lv 2. Key Sphere", 2, "", false },
	{ 0xD2CD30, 0, TreasureType::CHEST, "Macalania Woods - Central", "Megalixir", 2, "Prize for Butterfly Hunt after battle with Spherimorph and before Airship", true },
	{ 0xD2CD30, 1, TreasureType::CHEST, "Macalania Woods - North", "Elixir", 2, "Prize for Butterfly Hunt after battle after Battle with Spherimorph and before Airship", true },
	{ 0xD2CD31, 0, TreasureType::NPC, "Highroad - South End", "Hunter's Spear", 1, "Obtained from a guy", true },
	{ 0xD2CD31, 1, TreasureType::NPC, "Highroad - South End", "Antidote", 2, "Obtained from a girl", true },
	{ 0xD2CD31, 2, TreasureType::NPC, "Highroad - South End", "Hi-Potion", 1, "Obtained from a guy", true },
	{ 0xD2CD31, 3, TreasureType::NPC, "Highroad - South", "Soft", 3, "Obtained from a boy, obtainable if Blitzball was not kicked", true },
	{ 0xD2CD31, 4, TreasureType::NPC, "Highroad - South", "Red Ring", 1, "Obtained from a male crusader", true },
	{ 0xD2CD31, 5, TreasureType::NPC, "Highroad - Central", "Gil", 600, "Obtained from a male crusader", true },
	{ 0xD2CD31, 6, TreasureType::NPC, "Highroad - Central", "Lv. 1 Key Sphere", 1, "Obtained from a male crusader", true },
	{ 0xD2CD31, 7, TreasureType::NPC, "Highroad - Central", "Andidote", 4, "Obtained from a female crusader", true },
	{ 0xD2CD32, 0, TreasureType::NPC, "Highroad - Central", "Ether", 1, "Obtained from a male crusader", true },
	{ 0xD2CD32, 1, TreasureType::NPC, "Highroad - Central", "Hi-Potion", 1, "Obtained from a woman", true },
	{ 0xD2CD33, 0, TreasureType::NPC, "Mushroom Rock", "Tough Bangle", 1, "Obtained from a male crusader", true },
	{ 0xD2CD33, 1, TreasureType::NPC, "Mushroom Rock", "Phoenix Down", 2, "Obtained from a male crusader", true },
	{ 0xD2CD33, 2, TreasureType::NPC, "Mushroom Rock", "Remedy", 1, "Obtained from a male crusader", true },
	{ 0xD2CD33, 3, TreasureType::NPC, "Mushroom Rock", "Hi-Potion", 1, "Obtained from a male crusader", true },
	{ 0xD2CD33, 4, TreasureType::NPC, "Mushroom Rock", "Ether", 1, "Obtained from a male crusader", true },
	{ 0xD2CD33, 5, TreasureType::NPC, "Mushroom Rock - Valley", "Hi-Potion", 1, "Obtained from a male crusader", true },
	{ 0xD2CD33, 6, TreasureType::NPC, "Mushroom Rock - Valley", "Potion", 10, "Obtained from a male crusader", true },
	{ 0xD2CD33, 7, TreasureType::NPC, "Mushroom Rock - Precipice", "Gil", 400, "Obtained from a male crusader", true },
	{ 0xD2CD34, 0, TreasureType::NPC, "Mushroom Rock - Precipice", "X-Potion", 1, "Obtained from a male crusader", true },
	{ 0xD2CD34, 1, TreasureType::NPC, "Mushroom Rock - Precipice", "Mega-Potion", 1, "Obtained from a male crusader", true },
	{ 0xD2CD48, 5, TreasureType::CHEST, "Kilika - Trials", "Red Armlet", 1, "", false },
	{ 0xD2CD49, 0, TreasureType::CHEST, "Kilika - Tavern", "Ether", 1, "Chest appear if a girl was rescued from collasping house", true },
	{ 0xD2CD49, 1, TreasureType::CHEST, "Kilika - House", "Potion", 3, "", false },
	{ 0xD2CD4A, 0, TreasureType::CHEST, "Oasis", "Albhed Potion", 8, "", false },
	{ 0xD2CD4A, 1, TreasureType::CHEST, "Oasis", "Remedy", 4, "", false },
	{ 0xD2CD4A, 2, TreasureType::CHEST, "Oasis", "Albhed First Aid Kit Prompt", 1, "Activate on the first First Aid Kit", false },
	{ 0xD2CD4B, 0, TreasureType::CHEST, "Sanubia Desert - East", "Albhed Potion", 8, "", false },
	{ 0xD2CD4B, 1, TreasureType::CHEST, "Sanubia Desert - East", "Hi-Potion", 4, "", false },
	{ 0xD2CD4B, 2, TreasureType::CHEST, "Sanubia Desert - East", "Ether", 2, "", false },
	{ 0xD2CD4C, 0, TreasureType::CHEST, "Sanubia Desert - Central", "Albhed Potion", 8, "", false },
	{ 0xD2CD4C, 1, TreasureType::CHEST, "Sanubia Desert - Central", "Gil", 10000, "", false },
	{ 0xD2CD4C, 2, TreasureType::CHEST, "Sanubia Desert - Central", "Lv. 2 Key Sphere", 1, "", false },
	{ 0xD2CD4C, 3, TreasureType::CHEST, "Sanubia Desert - Central", "Elixir", 1, "", false },
	{ 0xD2CD4C, 4, TreasureType::CHEST, "Sanubia Desert - Central", "Hi-Potion", 4, "", false },
	{ 0xD2CD4C, 5, TreasureType::CHEST, "Sanubia Desert - Central", "X-Potion", 2, "", false },
	{ 0xD2CD4C, 7, TreasureType::CHEST, "Sanubia Desert - Central", "Mega-Potion", 2, "", false },
	{ 0xD2CD4D, 0, TreasureType::CHEST, "Sanubia Desert - West", "Megalixir", 3, "", false },
	{ 0xD2CD4D, 1, TreasureType::CHEST, "Sanubia Desert - West", "Teleport Sphere", 2, "", false },
	{ 0xD2CD4D, 2, TreasureType::CHEST, "Sanubia Desert - West", "Hi-Potion", 8, "", false },
	{ 0xD2CD4D, 3, TreasureType::CHEST, "Sanubia Desert - West", "Mega-Potion", 3, "", false },
	{ 0xD2CD4D, 4, TreasureType::CHEST, "Sanubia Desert - West", "X-Potion", 2, "", false },
	{ 0xD2CD4D, 5, TreasureType::CHEST, "Sanubia Desert - West", "Mercury Crest*", 1, "", false },
	{ 0xD2CD4E, 4, TreasureType::NPC, "Home", "Hi-Potion", 2, "Obtained from Al Bhed lying on the floor", true },
	{ 0xD2CD80, 1, TreasureType::NPC, "Besaid - House", "Mangled and Slobbery", 1, "Obtained from a dog, used to activate Valefor's Energy Blast", false },
	{ 0xD2CD91, 1, TreasureType::CHEST, "Besaid Village", "Hi-Potion", 1, "", false },
	{ 0xD2CD91, 2, TreasureType::CHEST, "Besaid Village", "Gil", 400, "", false },
	{ 0xD2CD91, 3, TreasureType::CHEST, "Besaid Village", "Potion", 2, "", false },
	{ 0xD2CD91, 4, TreasureType::CHEST, "Besaid Village", "Pheonix Down", 1, "", false },
	{ 0xD2CD92, 0, TreasureType::CHEST, "The Farplane", "Venus Crest", 1, "Key Item", false },
	{ 0xD2CD92, 1, TreasureType::CHEST, "Guadosalam", "Elixir", 1, "", false },
	{ 0xD2CD92, 2, TreasureType::CHEST, "Guadosalam", "Mega-Potion", 1, "", false },
	{ 0xD2CD92, 3, TreasureType::CHEST, "Guadosalam - House", "Gil", 3000, "", false },
	{ 0xD2CD92, 4, TreasureType::CHEST, "Mansion - Entrance", "Hi-Potion", 2, "", false },
	{ 0xD2CD92, 5, TreasureType::CHEST, "Road to Farplane", "Lightning Marble", 8, "", false },
	{ 0xD2CD93, 0, TreasureType::CHEST, "Lake Macalania - Agency Front", "Gil", 4000, "", false },
	{ 0xD2CD93, 1, TreasureType::CHEST, "Lake Macalania - Crevasse", "Lv. 1 Key Sphere", 1, "", false },
	{ 0xD2CD93, 2, TreasureType::CHEST, "Lake Macalania - Crevasse", "Mega-Potion", 1, "", false },
	{ 0xD2CDE6, 0, TreasureType::ITEM, "Stadium - Locker Room", "Jupiter Crest", 1, "Obtained from locker after entering Mi'hen highroad", false },
	{ 0xD2CDE6, 1, TreasureType::CHEST, "Luca - Number 2 Dock", "Pheonix Down", 2, "", false },
	{ 0xD2CDE6, 2, TreasureType::CHEST, "Luca - Number 1 Dock", "Gil", 600, "", false },
	{ 0xD2CDE6, 3, TreasureType::CHEST, "Luca - Number 1 Dock", "Tidal Spear", 1, "", false },
	{ 0xD2CDE6, 4, TreasureType::CHEST, "Luca - Number 5 Dock", "HP Sphere", 1, "", false },
	{ 0xD2CDE6, 5, TreasureType::CHEST, "Stadium - Basement B", "Hi-Potion", 2, "", false },
	{ 0xD2CDE6, 6, TreasureType::CHEST, "Luca - City Limits", "Gil", 1000, "", false },
	{ 0xD2CDE6, 7, TreasureType::CHEST, "Luca - Number 5 Dock", "Magic Sphere", 1, "", false },
	{ 0xD2CDFC, 0, TreasureType::ITEM, "Ruins - Stairs", "Withered Boquet", 1, "Key Item", false },
	{ 0xD2CDFD, 0, TreasureType::ITEM, "Ruins - Small Room", "Flint", 1, "Key Item", false },
	{ 0xD2CE0B, 0, TreasureType::CHEST, "Submerged Ruins", "Gil", 200, "", false },
	{ 0xD2CE0B, 1, TreasureType::CHEST, "Submerged Ruins", "Potions", 2, "", false },
	{ 0xD2CE0B, 2, TreasureType::CHEST, "Ruins - Stairs", "Ether", 1, "", false },
	{ 0xD2CE0B, 3, TreasureType::CHEST, "Ruins - Hall", "Hi-Potion", 1, "", false },
	{ 0xD2CE0B, 6, TreasureType::CHEST, "Ruins - Hall", "X-Potion", 1, "", false },
	{ 0xD2CE0B, 7, TreasureType::CHEST, "Ruins - Underwater Hall", "Hi-Potion", 1, "", false },
	{ 0xD2CE0D, 0, TreasureType::CHEST, "Salvage Ship - Deck", "Rikku Friend - Potion", 3, "Always obtainable after leaving the map", false },
	{ 0xD2CE3C, 6, TreasureType::NPC, "Kilika Woods", "NulBlaze Shield", 1, "Obtained from female crusader after defeating Ochu", true },
	{ 0xD2CE3D, 2, TreasureType::NPC, "Kilika Woods", "Phoenix Down", 3, "Obtained from female crusader after fleeing Ochu", true },
	{ 0xD2CE3D, 3, TreasureType::CHEST, "Kilika Woods", "Mana Sphere", 2, "", false },
	{ 0xD2CE3D, 4, TreasureType::CHEST, "Kilika Woods", "Scout", 1, "", false },
	{ 0xD2CE3D, 5, TreasureType::CHEST, "Kilika Woods", "Luck Sphere", 1, "", false },
	{ 0xD2CE3D, 6, TreasureType::NPC, "Kilika Woods", "Antidote", 4, "Obtained from Luzzu after before Ochu", true },
	{ 0xD2CE3D, 7, TreasureType::NPC, "Kilika Woods", "Elixir", 4, "Obtained from Luzzu after defeating Ochu", true },
	{ 0xD2CE3E, 0, TreasureType::NPC, "Kilika Woods", "Remedy", 1, "Obtained from female crusader before defeating Ochu", true },
	{ 0xD2CE3E, 1, TreasureType::NPC, "Kilika Woods", "Hi-Potion", 1, "Obtained from female crusader", true },
	{ 0xD2CE41, 3, TreasureType::CHEST, "Besaid - Beach", "Moon Crest", 1, "Key Item", false },
	{ 0xD2CE41, 4, TreasureType::CHEST, "Besaid - Beach", "Antidote", 2, "", false },
	{ 0xD2CE41, 5, TreasureType::NPC, "Besaid - Beach", "Hi-Potion", 1, "Obtained from Datto after meeting Wakka", true },
	{ 0xD2CE41, 6, TreasureType::NPC, "Besaid - Beach", "Potions", 3, "Obtained from Jassu after meeting Wakka", true },
	{ 0xD2CE41, 7, TreasureType::NPC, "Besaid - Beach", "Potions", 2, "Obtained from Botta after meeting Wakka", true },
	{ 0xD2CE42, 0, TreasureType::NPC, "Besaid - Beach", "Gil", 200, "Obtained from Keepa after meeting Wakka", true },
	{ 0xD2CE42, 1, TreasureType::NPC, "Besaid - Port", "Remedy", 1, "Obtained from a boy", true },
	{ 0xD2CE42, 2, TreasureType::NPC, "Besaid - Port", "Seeker's Ring", 1, "Obtained from a priest", true },
	{ 0xD2CE42, 3, TreasureType::NPC, "Besaid - Port", "Phoenix Down", 3, "Obtained from a woman", true },
	{ 0xD2CE42, 4, TreasureType::NPC, "Besaid - Port", "Ether", 1, "Obtained from a guy with green shirt", true },
	{ 0xD2CE42, 5, TreasureType::NPC, "Besaid - Port", "Gil", 400, "Obtained from a shirtless guy", true },
	{ 0xD2CE46, 5, TreasureType::CHEST, "Djose Highroad", "Phoenix Down", 2, "", false },
	{ 0xD2CE46, 6, TreasureType::CHEST, "Djose Highroad", "Bright Bangle", 1, "", false },
	{ 0xD2CE47, 0, TreasureType::CHEST, "Djose Temple", "Ability Sphere", 4, "", false },
	{ 0xD2CE47, 1, TreasureType::CHEST, "Djose Temple", "Gil", 4000, "", false },
	{ 0xD2CE47, 2, TreasureType::CHEST, "Djose - Inn", "Switch Hitter", 1, "", false },
	{ 0xD2CE47, 3, TreasureType::CHEST, "Djose - Great Hall", "Ether", 1, "", false },
	{ 0xD2CE47, 4, TreasureType::CHEST, "Djose - Nuns' Chamber", "Remedy", 1, "", false },
	{ 0xD2CE47, 5, TreasureType::CHEST, "Djose - Monks' Chamber", "Mega Phoenix", 1, "", false },
	{ 0xD2CE48, 0, TreasureType::CHEST, "Djose Highroad", "Soft Ring", 1, "", false },
	{ 0xD2CE48, 1, TreasureType::NPC, "Djose Highroad", "Ether", 1, "Obtained from a crusader", true },
	{ 0xD2CE48, 2, TreasureType::NPC, "Djose Highroad", "Mega-Potion", 1, "Obtained from a crusader", true },
	{ 0xD2CE48, 3, TreasureType::NPC, "Djose Highroad", "Variable Steel", 1, "Obtained from a crusader", true },
	{ 0xD2CE48, 4, TreasureType::NPC, "Djose Highroad", "Hi-Potion", 1, "Obtained from a monk", true },
	{ 0xD2CE48, 5, TreasureType::NPC, "Djose - Pilgrimage Road", "Halberd", 1, "Obtained from a crusader, also a missable item for Kimahri", true },
	{ 0xD2CE48, 6, TreasureType::NPC, "Djose - Pilgrimage Road", "Potion", 10, "Obtained from a crusader", true },
	{ 0xD2CE48, 7, TreasureType::NPC, "Djose - Pilgrimage Road", "Hi-Potion", 2, "Obtained from a monk", true },
	{ 0xD2CE49, 1, TreasureType::NPC, "Macalania - Hall", "Shell Targe", 1, "Obtained from Tromell", true },
	{ 0xD2CE4A, 2, TreasureType::CHEST, "Macalania - Hall", "Gil", 5000, "", false },
	{ 0xD2CE4A, 3, TreasureType::CHEST, "Macalania - Hall", "X-Potion", 2, "", false },
	{ 0xD2CE4A, 4, TreasureType::CHEST, "Macalania - Monks' Chamber", "Phoenix Down", 3, "", false },
	{ 0xD2CE4A, 5, TreasureType::CHEST, "Macalania - Nuns' Chamber", "Remedy", 2, "", false },
	{ 0xD2CE4A, 7, TreasureType::CHEST, "Lake Macalania - Lake Bottom", "Avenger", 1, "", true },
	{ 0xD2CE4C, 0, TreasureType::CHEST, "Lake Macalania - Lake Bottom", "Lv. 2 Key Sphere", 1, "", true },
	{ 0xD2CE4C, 2, TreasureType::NPC, "Macalania - Road", "Gil", 400, "Obtained from an Albhed", true },
	{ 0xD2CE4C, 3, TreasureType::NPC, "Macalania - Monks' Chamber", "Elixer", 1, "Obtained from a monk", true },
	{ 0xD2CE4C, 4, TreasureType::NPC, "Macalania - Monks' Chamber", "Ether", 1, "Obtained from a monk", true },
	{ 0xD2CE4C, 5, TreasureType::NPC, "Macalania - Nuns' Chamber", "Hi-Potion", 2, "Obtained from a nun", true },
	{ 0xD2CE50, 2, TreasureType::CHEST, "Home - Living Quarters", "Skill Sphere", 1, "", true },
	{ 0xD2CE50, 3, TreasureType::CHEST, "Home - Living Quarters", "Special Sphere", 1, "", true },
	{ 0xD2CE50, 4, TreasureType::CHEST, "Home - Living Quarters", "Friend Sphere", 1, "", true },
	{ 0xD2CE50, 5, TreasureType::CHEST, "Home - Living Quarters", "Treasure of Dream", 1, "Free to choose many items, best choice is Elixer", true },
	{ 0xD2CE50, 6, TreasureType::CHEST, "Home - Main Corridor", "Al Bhed Potion", 6, "", true },
	{ 0xD2CE50, 7, TreasureType::CHEST, "Home - Main Corridor", "Al Bhed Potion", 4, "", true },
	{ 0xD2CE51, 0, TreasureType::CHEST, "Home - Main Corridor", "Lv. 2 Key Sphere", 1, "", true },
	{ 0xD2CE51, 1, TreasureType::CHEST, "Home - Main Corridor", "Lv. 4 Key Sphere", 1, "", true },
	{ 0xD2CE51, 2, TreasureType::CHEST, "Home - Environment Controls", "Gil", 10000, "", true },
	{ 0xD2CE7C, 2, TreasureType::NPC, "Zanarkand - Overpass", "Potion", 2, "Obtained from a girl in pink shirt", true },
	{ 0xD2CE7E, 1, TreasureType::CHEST, "S.S. Liki - Cabin", "Remedy", 1, "", false },
	{ 0xD2CE80, 6, TreasureType::CHEST, "S.S. Winno - Cabin", "Hi-Potion", 1, "", false },
	{ 0xD2CE80, 7, TreasureType::NPC, "S.S. Winno - Deck", "Ace Wizard", 1, "Obtained from a guy after answering 11 Seagulls", false },
	{ 0xD2CE82, 0, TreasureType::CHEST, "Thunder Plains - South", "Phoenix Down", 2, "", false },
	{ 0xD2CE82, 1, TreasureType::CHEST, "Thunder Plains - South", "Hi-Potion", 2, "", false },
	{ 0xD2CE82, 2, TreasureType::CHEST, "Thunder Plains - South", "Gil", 5000, "", false },
	{ 0xD2CE82, 3, TreasureType::CHEST, "Thunder Plains - South", "Water Ball", 1, "", false },
	{ 0xD2CE82, 4, TreasureType::CHEST, "Thunder Plains - North", "X-Potion", 1, "", false },
	{ 0xD2CE82, 5, TreasureType::CHEST, "Thunder Plains - North", "Remedy", 1, "", false },
	{ 0xD2CE82, 6, TreasureType::CHEST, "Thunder Plains - North", "Gil", 2000, "", false },
	{ 0xD2CE82, 7, TreasureType::CHEST, "Thunder Plains - North", "Ether", 1, "", false },
	{ 0xD2CE83, 2, TreasureType::ITEM, "Thunder Plains - Agency Front", "Yellow Shield", 1, "On the floor", false },
	{ 0xD2CE83, 3, TreasureType::CHEST, "Thunder Plains - Agency Front", "Venus Sigil", 1, "Chest appear after dodging 200 bolts consequtively, Key Item", false },
	{ 0xD2CE92, 0, TreasureType::CHEST, "Thunder Plains - Agency Front", "X-Potion", 2, "Chest appear after dodging 5 bolts consequtively, Key Item", false },
	{ 0xD2CE92, 1, TreasureType::CHEST, "Thunder Plains - Agency Front", "Mega-Potion", 2, "Chest appear after dodging 10 bolts consequtively, Key Item", false },
	{ 0xD2CE92, 2, TreasureType::CHEST, "Thunder Plains - Agency Front", "MP Sphere", 2, "Chest appear after dodging 20 bolts consequtively, Key Item", false },
	{ 0xD2CE92, 3, TreasureType::CHEST, "Thunder Plains - Agency Front", "Strength Sphere", 3, "Chest appear after dodging 50 bolts consequtively, Key Item", false },
	{ 0xD2CE92, 4, TreasureType::CHEST, "Thunder Plains - Agency Front", "HP Sphere", 3, "Chest appear after dodging 100 bolts consequtively, Key Item", false },
	{ 0xD2CE92, 5, TreasureType::CHEST, "Thunder Plains - Agency Front", "Megalixir", 4, "Chest appear after dodging 150 bolts consequtively, Key Item", false },
	{ 0xD2CE92, 6, TreasureType::CHEST, "Thunder Plains - Agency Front", "Ether", 1, "Chest appear after 30 bolts struck, Key Item", false },
	{ 0xD2CE92, 7, TreasureType::CHEST, "Thunder Plains - Agency Front", "Elixer", 1, "Chest appear after 80 bolts struck, Key Item", false },
	{ 0xD2CEDF, 3, TreasureType::NPC, "Airship - Cabin", "Albhed Potion", 4, "Obtained from an Albhed", true },
	{ 0xD2CF0F, 0, TreasureType::CHEST, "Djose - Trials", "Magic Sphere", 1, "", false },
	{ 0xD2CF10, 0, TreasureType::CHEST, "Macalania - Trials", "Luck Sphere", 1, "", false },
	{ 0xD2D6EC, 0, TreasureType::CHEST, "Besaid - Trials", "Rod of Wisdom", 1, "", false },
	{ 0xD2D6EC, 1, TreasureType::CHEST, "Kilika - Trials", "Event - Seal Broken", 1, "", false },
	{ 0xD2D6EC, 2, TreasureType::CHEST, "Djose - Trials", "Event -Seal Broken", 1, "", false },
	{ 0xD2D6EC, 3, TreasureType::CHEST, "Macalania - Trials", "Event - Seal Broken", 1, "", false },
	{ 0xD2D6EC, 4, TreasureType::CHEST, "Bevelle - Trials", "Event - Seal Broken and Chest Opened", 1, "", true },
	{ 0xD2D70C, 0, TreasureType::ITEM, "Besaid Village", "Item - Jecht Sphere", 1, "", false },
	{ 0xD2D70C, 1, TreasureType::ITEM, "Thunder Plains - South", "Item - Jecht Sphere", 1, "", false },
	{ 0xD2D70C, 2, TreasureType::ITEM, "Moonflow - South Wharf", "Item - Jecht Sphere", 1, "", false },
	{ 0xD2D70C, 3, TreasureType::ITEM, "Highroad - Oldroad, South", "Item - Jecht Sphere", 1, "", false },
	{ 0xD2D70C, 4, TreasureType::ITEM, "Stadium - Basement A", "Item - Jecht Sphere", 1, "", false },
	{ 0xD2D70C, 5, TreasureType::ITEM, "S.S. Liki - Bridge", "Item - Jecht Sphere", 1, "", false },
	{ 0xD2D70C, 7, TreasureType::ITEM, "Macalania Woods - South", "Item - Jecht Sphere", 1, "", false },
	{ 0xD2DF46, 3, TreasureType::ITEM, "Luca - After the Finals", "Blitzball STR Sphere", 1, "Obtained after winning the story line tournament", true },
	{ 0xD307A0, 0, TreasureType::ITEM, "Salvage Ship - Deck", "Al Bhed Primer I", 1, "Re-obtainable in Bikanel Desert, Key Item", false },
	{ 0xD307A0, 1, TreasureType::ITEM, "Besaid - Crusaders Lodge", "Al Bhed Primer II", 1, "Key Item", false },
	{ 0xD307A0, 2, TreasureType::ITEM, "S.S. Liki - Power Room", "Al Bhed Primer III", 1, "Key Item", false },
	{ 0xD307A0, 3, TreasureType::ITEM, "Kilika - Tavern", "Al Bhed Primer IV", 1, "Key Item", false },
	{ 0xD307A0, 4, TreasureType::ITEM, "S.S. Winno - Bridge", "Al Bhed Primer V", 1, "Key Item", false },
	{ 0xD307A0, 5, TreasureType::ITEM, "Stadium - Basement B", "Al Bhed Primer VI", 1, "Key Item", false },
	{ 0xD307A0, 6, TreasureType::ITEM, "Theater - Reception", "Al Bhed Primer VII", 1, "Key Item", false },
	{ 0xD307A0, 7, TreasureType::ITEM, "Highroad - Agency", "Al Bhed Primer VIII", 1, "Key Item", false },
	{ 0xD307A1, 0, TreasureType::ITEM, "Highroad - Newroad, North", "Al Bhed Primer IX", 1, "Key Item", false },
	{ 0xD307A1, 1, TreasureType::ITEM, "Mushroom Rock - Precipice", "Al Bhed Primer X", 1, "Key Item", false },
	{ 0xD307A1, 2, TreasureType::ITEM, "Djose Highroad", "Al Bhed Primer XI", 1, "Key Item", false },
	{ 0xD307A1, 3, TreasureType::ITEM, "Moonflow - North Wharf", "Al Bhed Primer XII", 1, "Key Item", false },
	{ 0xD307A1, 4, TreasureType::ITEM, "Guadosalam - House", "Al Bhed Primer XIII", 1, "Key Item", false },
	{ 0xD307A1, 5, TreasureType::NPC, "Thunder Plains - Agency", "Al Bhed Primer XIV", 1, "Tell Rin 'Okay', Re-obtainable in Bikanel Desert, Key Item", false },
	{ 0xD307A1, 6, TreasureType::ITEM, "Macalania Woods - Lake Road", "Al Bhed Primer XV", 1, "Key Item", false },
	{ 0xD307A1, 7, TreasureType::ITEM, "Lake Macalania - Agency Front", "Al Bhed Primer XVI", 1, "Key Item", false },
	{ 0xD307A2, 0, TreasureType::ITEM, "Sanubia Desert - Central", "Al Bhed Primer XVII", 1, "Key Item", false },
	{ 0xD307A2, 1, TreasureType::ITEM, "Sanubia Desert - Central", "Al Bhed Primer XVIII", 1, "Key Item", false },
	{ 0xD307A2, 2, TreasureType::ITEM, "Home", "Al Bhed Primer XIX", 1, "Key Item", true },
	{ 0xD307A2, 3, TreasureType::ITEM, "Home - Living Quarters", "Al Bhed Primer XX", 1, "Key Item", true },
	{ 0xD307A2, 4, TreasureType::ITEM, "Home - Main Corridor", "Al Bhed Primer XXI", 1, "Key Item", true },
	{ 0xD307A2, 5, TreasureType::ITEM, "Bevelle - Priests' Passage", "Al Bhed Primer XXII", 1, "Key Item", true },
	{ 0xD307A2, 6, TreasureType::ITEM, "Calm Lands - Central", "Al Bhed Primer XXIII", 1, "Key Item", false },
	//{ 0xD2CC81, 7, TreasureType::CHEST, "Highbridge", "Event - Chat with O'aka", 1, "", false },
	//{ 0xD2CC83, 0, TreasureType::CHEST, "Moonflow - South Bank Road", "Event - Talked to Belgemine", 1, "", false },
	//{ 0xD2CC83, 1, TreasureType::CHEST, "Moonflow - South Bank Road", "Event - Fought Belgemine", 1, "", false },
	//{ 0xD2CC88, 0, TreasureType::CHEST, "Bevelle - Via Purifico", "Event -Gate closed", 1, "", false },
	//{ 0xD2CCFE, 1, TreasureType::CHEST, "Highroad - South End", "Event - Maechen Talks", 1, "", false },
	//{ 0xD2CD00, 2, TreasureType::CHEST, "Highroad - Agency, Front", "Event - Defeat Chocobo Eater Cutscene", 1, "", false },
	//{ 0xD2CD06, 4, TreasureType::CHEST, "Mushroom Rock", "Clasko - Cheer him up!", 1, "", false },
	//{ 0xD2CD08, 1, TreasureType::CHEST, "", "Answer Gatta First", 1, "", false },
	//{ 0xD2CD08, 2, TreasureType::CHEST, "", "Answer Gatta Second", 1, "", false },
	//{ 0xD2CD08, 3, TreasureType::CHEST, "", "Support Gatta First", 1, "", false },
	//{ 0xD2CD08, 4, TreasureType::CHEST, "", "Support Gatta Second", 1, "", false },
	//{ 0xD2CD0A, 0, TreasureType::CHEST, "Calm Lands - North", "Cutscene - Sin", 1, "", false },
	//{ 0xD2CD0A, 7, TreasureType::CHEST, "Calm Lands - North", "Event - Talked to Trainer", 1, "", false },
	//{ 0xD2CD0B, 0, TreasureType::CHEST, "", "Calm Lands - Activate Training", 1, "", false },
	//{ 0xD2CD13, 4, TreasureType::CHEST, "Macalania Woods: Lake Road", "Event - Barter with O'aka", 1, "", false },
	//{ 0xD2CD17, 1, TreasureType::CHEST, "Highroad - South End", "Event - Fought Belgemine", 1, "", false },
	//{ 0xD2CD17, 3, TreasureType::CHEST, "Calm Lands - Central", "Event - Fought Belgemine", 1, "", false },
	//{ 0xD2CD21, 0, TreasureType::CHEST, "Calm Lands - Central", "Cutscene - Talked to Yuna 1", 1, "", false },
	//{ 0xD2CD21, 1, TreasureType::CHEST, "Calm Lands - Central", "Cutscene - Talked to Yuna 2", 1, "", false },
	//{ 0xD2CD21, 2, TreasureType::CHEST, "Calm Lands - Central", "Cutscene - Talked to Wakka", 1, "", false },
	//{ 0xD2CD21, 3, TreasureType::CHEST, "Calm Lands - Central", "Cutscene - Talked to Rikku", 1, "", false },
	//{ 0xD2CD21, 4, TreasureType::CHEST, "Calm Lands - Central", "Cutscene - Talked to Lulu 1", 1, "", false },
	//{ 0xD2CD21, 5, TreasureType::CHEST, "Calm Lands - Central", "Cutscene - Talked to Lulu 2", 1, "", false },
	//{ 0xD2CD21, 6, TreasureType::CHEST, "Calm Lands - Central", "Cutscene - Talked to Auron", 1, "", false },
	//{ 0xD2CD21, 7, TreasureType::CHEST, "Calm Lands - Central", "Cutscene - Talked to Kimahri", 1, "", false },
	//{ 0xD2CD48, 0, TreasureType::CHEST, "Kilika - Residential Area", "Event - Save girl", 1, "", false },
	//{ 0xD2CD4E, 0, TreasureType::CHEST, "Sanubia Desert - West", "Sandragora - Megalixir", 3, "", false },
	//{ 0xD2CD4E, 1, TreasureType::CHEST, "Sanubia Desert - West", "Sandragora - Teleport Sphere", 2, "", false },
	//{ 0xD2CD4E, 2, TreasureType::CHEST, "Sanubia Desert - West", "Sandragora - Block", 1, "", false },
	//{ 0xD2CD80, 0, TreasureType::CHEST, "Besaid - Shop", "Event - Girl Talks about dog", 1, "", false },
	//{ 0xD2CD8B, 2, TreasureType::CHEST, "The Farplane", "Event - Wantz and Sister", 1, "", false },
	//{ 0xD2CD8C, 2, TreasureType::CHEST, "Lake Macalania - Agency", "Event - Talked to Clasko", 1, "", false },
	//{ 0xD2CE0C, 0, TreasureType::CHEST, "Salvage Ship - Deck", "Event - Rikku Albhed Tutorial Taught", 1, "", false },
	//{ 0xD2CE3C, 2, TreasureType::CHEST, "Kilika Woods", "Event - Ochu Defeated", 1, "", false },
	//{ 0xD2CE3C, 3, TreasureType::CHEST, "Kilika Woods", "Event - Luzza Talks Flee Ochu", 1, "", false },
	//{ 0xD2CE3C, 4, TreasureType::CHEST, "Kilika Woods", "Event- Crusader Talk Before Remedy", 1, "", false },
	//{ 0xD2CE3C, 5, TreasureType::CHEST, "Kilika Woods", "Event - Crusader After After Remedy", 1, "", false },
	//{ 0xD2CE3C, 7, TreasureType::NPC, "Kilika Woods", "Hi-Potion", 1, "Obtained from female crusader before defeating Ochu", true },
	//{ 0xD2CE3D, 0, TreasureType::NPC, "Kilika Woods", "Hi-Potion", 1, "Obtained from female crusader after defeating Ochu", true },
	//{ 0xD2CE4B, 0, TreasureType::CHEST, "Lake Macalania - Lake Bottom", "Event - Talked to Lulu", 1, "", false },
	//{ 0xD2CE4B, 1, TreasureType::CHEST, "Lake Macalania - Lake Bottom", "Event - Talked to Auron", 1, "", false },
	//{ 0xD2CE4B, 2, TreasureType::CHEST, "Lake Macalania - Lake Bottom", "Event - Talked to Wakka", 1, "", false },
	//{ 0xD2CE4B, 3, TreasureType::CHEST, "Lake Macalania - Lake Bottom", "Event - Talked to Kimahri", 1, "", false },
	//{ 0xD2CE4B, 4, TreasureType::CHEST, "Lake Macalania - Lake Bottom", "Event - Talked to Wakka After", 1, "", false },
	//{ 0xD2CE4B, 5, TreasureType::CHEST, "Lake Macalania - Lake Bottom", "Event - Talked to Kimahri After", 1, "", false },
	//{ 0xD2CE4B, 6, TreasureType::CHEST, "Lake Macalania - Lake Bottom", "Event - Talked to Lulu After", 1, "", false },
	//{ 0xD2CE4B, 7, TreasureType::CHEST, "Lake Macalania - Lake Bottom", "Event - Talked to Rikku After", 1, "", false },
	//{ 0xD2CE50, 0, TreasureType::CHEST, "Home - Living Quarters", "Event - Defeat Dual Horns", 1, "", false },
	//{ 0xD2CE50, 1, TreasureType::CHEST, "Home - Living Quarters", "Event - Defeat Chimera", 1, "", false },
	//{ 0xD2CE7C, 0, TreasureType::CHEST, "Zanarkand Dream -", "Event - Talk to group of small boy", 1, "", false },
	//{ 0xD2CE7C, 1, TreasureType::CHEST, "Zanarkand Dream", "Events - Talked to group of girls", 1, "", false },
	//{ 0xD2CE7E, 3, TreasureType::CHEST, "", "Event - Lend to O'aka", 1, "", false },
	//{ 0xD2CE80, 3, TreasureType::CHEST, "", "Jecht Shot for S.S Liki", 1, "", false },
	//{ 0xD2CE81, 0, TreasureType::CHEST, "Thunder Plains - South", "Event - Activate Qactuar Stones 1", 1, "", false },
	//{ 0xD2CE81, 1, TreasureType::CHEST, "Thunder Plains - South", "Event - Activate Qactuar Stones 2", 1, "", false },
	//{ 0xD2CE81, 2, TreasureType::CHEST, "Thunder Plains - North", "Event - Activate Qactuar Stones 3", 1, "", false },
	//{ 0xD2CE81, 5, TreasureType::CHEST, "Thunder Plains - Agency", "Event - Talked to Rikku", 1, "", false },
	//{ 0xD2CE83, 0, TreasureType::CHEST, "Thunder Plains - South", "Event - Activate Broken Tower", 1, "", false },
	//{ 0xD2CE83, 1, TreasureType::CHEST, "Thunder Plains - Agency Front", "Event - Chest Appear Dodge", 200, "", false },
	//{ 0xD2CE84, 0, TreasureType::CHEST, "Thunder Plains - Agency Front", "Event - Chest Appear Dodge", 5, "", false },
	//{ 0xD2CE84, 1, TreasureType::CHEST, "Thunder Plains - Agency Front", "Event - Chest Appear Dodge", 10, "", false },
	//{ 0xD2CE84, 2, TreasureType::CHEST, "Thunder Plains - Agency Front", "Event - Chest Appear Dodge", 20, "", false },
	//{ 0xD2CE84, 3, TreasureType::CHEST, "Thunder Plains - Agency Front", "Event - Chest Appear Dodge", 50, "", false },
	//{ 0xD2CE84, 4, TreasureType::CHEST, "Thunder Plains - Agency Front", "Event - Chest Appear Dodge", 100, "", false },
	//{ 0xD2CE84, 5, TreasureType::CHEST, "Thunder Plains - Agency Front", "Event - Chest Appear Dodge", 150, "", false },
	//{ 0xD2CE84, 6, TreasureType::CHEST, "Thunder Plains - Agency Front", "Event - Chest Appear Combined Dodge", 30, "", false },
	//{ 0xD2CE84, 7, TreasureType::CHEST, "Thunder Plains - Agency Front", "Event - Chest Appear Combined Dodge", 80, "", false },
	//{ 0xD2CEDD, 0, TreasureType::CHEST, "Airship - Bridge", "Event - Talked to Cid Sphere Finder", 1, "", false },
	//{ 0xD2CEDD, 1, TreasureType::CHEST, "Airship - Corridor", "Talked to Issaru 1", 1, "", false },
	//{ 0xD2CEDD, 2, TreasureType::CHEST, "Airship - Corridor", "Talked to Issaru 2", 1, "", false },
	//{ 0xD2CEDD, 3, TreasureType::CHEST, "Airship - Corridor", "Talked to Maroda 1", 1, "", false },
	//{ 0xD2CEDD, 4, TreasureType::CHEST, "Airship - Corridor", "Talked to Maroda 2", 1, "", false },
	//{ 0xD2CEDD, 5, TreasureType::CHEST, "Airship - Corridor", "Talked to Dona", 1, "", false },
	//{ 0xD2CEDD, 6, TreasureType::CHEST, "Airship - Corridor", "Talked to Rin 1", 1, "", false },
	//{ 0xD2CEDD, 7, TreasureType::CHEST, "Airship - Bridge", "Cutsene- Rikku Seymours dead", 1, "", false },
	//{ 0xD2CEDE, 0, TreasureType::CHEST, "Airship - Bridge", "Talked to Lulu", 1, "", false },
	//{ 0xD2CEDE, 1, TreasureType::CHEST, "Airship - Bridge", "Talked to Cid Before Fight", 1, "", false },
	//{ 0xD2CEDF, 1, TreasureType::CHEST, "Airship - Corridor", "Talked to Rin 2", 1, "", false },
	//{ 0xD2CEDF, 5, TreasureType::CHEST, "Airship - Cabin", "Rin - Open a hatch", 1, "", false },
	//{ 0xD2CEDF, 6, TreasureType::CHEST, "Airship - Bridge", "Talked to Wakka Yuna's Yuna", 1, "", false },
	//{ 0xD2D68D, 0, TreasureType::CHEST, "", "Gatta Dies", 1, "", false },
	//{ 0xD2D6AC, 0, TreasureType::CHEST, "", "Win Blitzball", 1, "", false },
	//{ 0xD2D6AD, 0, TreasureType::CHEST, "Lake Macalania - Agency", "Event - Clasko Chocobo Breeder", 1, "", false },
	//{ 0xD2D6AE, 0, TreasureType::CHEST, "Airship - Corridor", "Event - Agree to let Dona quit", 1, "", false },
	//{ 0xD2D6B8, 0, TreasureType::CHEST, "", "Jecht Shot Sucess", 1, "", false },
	//{ 0xD2D6B9, 0, TreasureType::CHEST, "Highroad - South End", "Event - Talked to Belgemine", 1, "", false },
	//{ 0xD2D6E2, 0, TreasureType::CHEST, "Macalania Woods: Lake Road", "Event - Talked with O'aka", 1, "", false },
	//{ 0xD2D78B, 2, TreasureType::CHEST, "Highroad - Agency, Front", "Event - Defeat Chocobo Eater", 1, "", false },
	//{ 0xD30F1C, 4, TreasureType::CHEST, "", "Key Item Base Address", 1, "", false },
};