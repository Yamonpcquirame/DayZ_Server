void main()
{
	//INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false);    // false = use weather controller from Weather.c

	weather.GetOvercast().Set( Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
	weather.GetRain().Set( 0, 0, 1);
	weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.1), 1, 0);

	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}


class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.45, 0.65 );
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );

		GetGame().SelectPlayer( identity, m_player );

		return m_player;

	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		EntityAI itemTop;
		EntityAI itemEnt;
		EntityAI jacket;
		EntityAI pant;
		EntityAI boots;		
		
		EntityAI pistol;
		EntityAI food;
		EntityAI medic;
		EntityAI bat;
		EntityAI rounds;
		EntityAI magPistol;
		EntityAI knife;
		
		EntityAI itemClothing;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

		itemClothing = player.FindAttachmentBySlotName( "Body" );
		if ( itemClothing )
		{
			player.RemoveAllItems();
			
			//Création de la veste
			string jacketArray[] = { "HikingJacket_Red", "HikingJacket_Black", "HikingJacket_Green", "HikingJacket_Blue" };
			int rndIndex = Math.RandomInt(0, 4);
			jacket = player.GetInventory().CreateInInventory(jacketArray[rndIndex]);
						
			//création du pantalon
			string pantArray[] = { "JumpsuitPants_Red", "JumpsuitPants_Grey", "JumpsuitPants_Green", "JumpsuitPants_Blue" };
			int rndIndex2 = Math.RandomInt(0, 4);
			pant = player.GetInventory().CreateInInventory(pantArray[rndIndex2]);
			
			//création des chaussures
			string bootsArray[] = { "Sneakers_Red", "Sneakers_Gray", "Sneakers_Green", "Sneakers_Black", "Sneakers_White" };
			int rndIndex3 = Math.RandomInt(0, 5);
			boots = player.GetInventory().CreateInInventory(bootsArray[rndIndex3]);
			
			//items
			//nourriture aléatoire
			string foodArray[] = { "TacticalBaconCan_Opened", "BakedBeansCan_Opened", "PeachesCan_Opened", "SpaghettiCan_Opened","SardinesCan_Opened","TunaCan_Opened" };
			int rndIndex4 = Math.RandomInt(0, 6);
			food = player.GetInventory().CreateInInventory(foodArray[rndIndex4]);
			
			//soin
			medic = player.GetInventory().CreateInInventory("Rag");
			itemEnt = player.GetInventory().CreateInInventory("SurgicalMask");
			itemEnt = player.GetInventory().CreateInInventory("VitaminBottle");
            
			//bouteille d'eau
			itemEnt = player.GetInventory().CreateInInventory("WaterBottle");
			
			//outils
			itemEnt = player.GetInventory().CreateInInventory("DuctTape");
			knife = player.GetInventory().CreateInInventory("KitchenKnife");
			itemEnt = player.GetInventory().CreateInInventory("PetrolLighter");
			itemEnt = player.GetInventory().CreateInInventory("OrienteeringCompass");

			//Pistolet
			pistol = player.GetInventory().CreateInInventory("MKII");
			//itemEnt = pistol.GetInventory().CreateAttachment("Mag_MKII_10Rnd");
			magPistol = player.GetInventory().CreateInInventory("Mag_MKII_10Rnd");
			rounds = player.GetInventory().CreateInInventory("Ammobox_22_50Rnd");
			
			//Batte de baseball avec des clous
			bat = player.GetInventory().CreateInInventory("NailedBaseballBat");

			            //	Assignation des raccourcis
			player.SetQuickBarEntityShortcut( pistol, 0, true );
			player.SetQuickBarEntityShortcut( magPistol, 1, true );
			player.SetQuickBarEntityShortcut( rounds, 2, true );
			player.SetQuickBarEntityShortcut( bat, 3, true );
			player.SetQuickBarEntityShortcut( medic, 4, true );
		
		}
            
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}