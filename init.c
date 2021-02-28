void SpawnObject( string type, vector position, vector orientation )
{
    auto obj = GetGame().CreateObject( type, position );
    obj.SetPosition( position );
    obj.SetOrientation( orientation );
    obj.SetOrientation( obj.GetOrientation() ); //Collision fix
    obj.Update();
    obj.SetAffectPathgraph( true, false );
    if( obj.CanAffectPathgraph() ) GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( GetGame().UpdatePathgraphRegionByObject, 100, false, obj );
}

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
	
		//Murs Cherno
SpawnObject( "Land_Castle_Wall1_20", "6870.870117 9.398950 2786.179932", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6849.859863 10.288100 2785.969971", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6275.120117 7.913050 2198.120117", "-119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6342.069824 14.518500 2381.800049", "-50.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6354.580078 16.536900 2400.050049", "-59.999996 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6366.919922 15.998100 2418.850098", "-55.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6379.569824 16.318600 2437.000000", "-55.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6393.069824 16.832199 2454.479980", "-50.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6328.950195 15.000100 2364.510010", "-55.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6314.060059 16.217699 2348.100098", "-40.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6298.689941 16.064899 2333.060059", "-50.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6285.580078 16.178200 2317.000000", "-50.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6258.779785 12.824000 2284.300049", "-50.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6272.169922 14.301100 2300.689941", "-50.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6245.350098 13.252500 2268.669922", "-50.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6243.600098 10.048200 2252.270020", "-119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6264.830078 8.397280 2215.929932", "-119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6254.169922 8.980480 2234.229980", "-119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6287.370117 8.721800 2180.889893", "-130.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6300.509766 7.688650 2165.179932", "-130.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6317.680176 7.691960 2156.909912", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6338.770020 4.193240 2157.149902", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6382.120117 3.870860 2156.290039", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6403.549805 3.677160 2156.139893", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6424.479980 4.454080 2152.639893", "-160.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6360.640137 4.926740 2156.189941", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6464.859863 4.375550 2149.239990", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6444.500000 4.252460 2149.070068", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6485.859863 4.157130 2149.199951", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6506.850098 7.132810 2149.030029", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6547.660156 6.619710 2154.500000", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6527.720215 5.790100 2149.149902", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6565.720215 5.351600 2165.090088", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6583.589844 4.842970 2175.510010", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6601.490234 3.201950 2186.050049", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6619.319824 5.864480 2195.919922", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6638.040039 4.868910 2206.979980", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6630.890137 4.869980 2256.010010", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6656.100098 4.075940 2217.209961", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6680.399902 4.756500 2249.419922", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6670.290039 4.173890 2231.310059", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6690.779785 4.413810 2267.159912", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6701.169922 4.119540 2285.060059", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6711.580078 3.633390 2302.979980", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6722.020020 4.589610 2321.139893", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6732.660156 4.000770 2340.090088", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6753.779785 3.623470 2376.419922", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6764.109863 4.290150 2394.909912", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6776.080078 3.741370 2411.870117", "130.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6790.609863 4.054030 2426.689941", "140.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6806.500000 4.310410 2440.149902", "140.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6822.270020 4.395110 2453.459961", "140.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6838.129883 4.237660 2466.739990", "140.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6854.209961 3.701450 2479.899902", "140.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6867.250000 4.448350 2495.760010", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6877.600098 4.068050 2513.679932", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6887.890137 4.049890 2531.629883", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6901.709961 4.241840 2570.030029", "100.000008 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6896.509766 4.309990 2550.300049", "110.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6743.379883 3.707250 2358.389893", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6903.279785 3.993500 2631.449951", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6903.279785 3.989530 2652.110107", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6903.410156 3.957830 2610.820068", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6903.350098 4.200960 2590.459961", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6903.189941 4.276640 2713.889893", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6891.479980 9.433620 2786.139893", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6903.259766 3.893630 2693.280029", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6902.709961 4.797200 2754.899902", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6903.220215 3.792760 2734.409912", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6902.569824 8.732500 2775.580078", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6829.160156 12.479800 2784.510010", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6903.229980 4.115010 2672.699951", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6808.490234 13.888900 2784.520020", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6786.729980 14.558200 2783.149902", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6766.299805 12.254100 2779.449951", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6745.430176 15.215000 2775.959961", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6723.839844 15.273600 2774.060059", "-10.000002 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6704.140137 16.392799 2767.120117", "-25.000002 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6685.319824 15.097200 2758.020020", "-25.000002 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6666.810059 13.938400 2747.899902", "-29.999998 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6648.560059 16.339399 2737.590088", "-29.999998 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6630.029785 3.082690 2721.719971", "-45.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6616.779785 9.276680 2709.469971", "-45.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6632.990234 15.389900 2724.330078", "-45.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6601.399902 15.476500 2695.010010", "-45.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6586.899902 17.694799 2680.189941", "-45.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6572.200195 17.216900 2665.300049", "-45.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6558.430176 17.214199 2649.280029", "-50.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6544.419922 17.318399 2633.340088", "-47.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6530.000000 17.377199 2617.659912", "-47.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6515.479980 17.289000 2601.899902", "-47.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6501.589844 17.381901 2586.590088", "-47.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6487.680176 16.454599 2571.860107", "-47.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6473.709961 17.454399 2556.790039", "-47.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6459.370117 17.479000 2541.850098", "-45.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6445.189941 17.088600 2526.239990", "-50.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6432.529785 17.153000 2509.340088", "-55.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6420.560059 18.482300 2492.300049", "-55.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6406.129883 17.328400 2471.649902", "-55.000000 0.000000 0.000000" );
//ouverture / fermeture du mur
//SpawnObject( "Land_Castle_Wall1_Corner1_nolc", "6413.930176 16.546499 2480.879883", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6407.910156 16.875504 2481.580078", "-50.000004 0.000000 0.000000" );
// Fermeture de sous le pont
SpawnObject( "Land_Castle_Wall1_20", "6486.087402 10.000000 2559.133057", "-47.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6473.448242 10.000000 2545.398438", "-47.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "6460.549805 10.000000 2531.260010", "-47.000000 0.000000 0.000000" );

//Severograd
SpawnObject( "Land_Castle_Wall1_20", "8000.890137 120.360001 12562.599609", "160.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8020.080078 120.353996 12569.700195", "160.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8037.799805 121.084999 12578.900391", "145.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7982.459961 120.313004 12555.000000", "155.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7963.959961 121.162003 12546.000000", "155.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7945.290039 122.026001 12537.099609", "155.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7926.810059 122.081001 12528.400391", "155.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7891.330078 124.529999 12523.000000", "-119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7907.810059 123.018997 12519.400391", "155.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7880.830078 124.285004 12541.099609", "-119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7870.259766 124.000000 12559.000000", "-119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7855.169922 124.038002 12571.900391", "-160.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7824.770020 124.000000 12604.900391", "-80.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7835.939941 124.237999 12575.400391", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7824.720215 124.818001 12584.700195", "-100.000008 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7831.600098 124.269997 12624.400391", "-59.999996 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7841.759766 124.000000 12641.400391", "-10.000002 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7862.799805 124.042000 12646.900391", "-14.999999 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7882.370117 124.938004 12653.000000", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7902.214844 124.727997 12661.583008", "-29.999998 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7921.115723 124.527000 12670.579102", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7941.060059 123.670998 12679.000000", "-25.000002 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7959.680176 124.069000 12687.500000", "-25.000002 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7979.000000 124.031998 12694.299805", "-14.999999 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7999.290039 124.060997 12698.599609", "-10.000002 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8019.496582 117.757767 12701.517578", "-10.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8039.779785 124.357002 12706.200195", "-14.999999 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8059.569824 124.026001 12702.200195", "37.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8071.689941 124.330002 12685.700195", "70.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8077.180176 124.064003 12666.099609", "80.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8075.560059 124.000000 12645.900391", "110.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8070.540039 124.796997 12626.000000", "100.000008 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8063.600098 124.560997 12606.400391", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8051.970215 124.218002 12589.700195", "130.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8058.640137 116.772591 12711.139648", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8036.963379 117.503922 12706.093750", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8019.996094 124.165001 12702.229492", "-10.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8001.763672 117.636871 12699.907227", "-10.000004 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8071.404297 116.945145 12687.286133", "70.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "8068.978027 116.832565 12697.220703", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Castle_Wall1_20", "7980.016602 117.909409 12695.243164", "-14.999999 0.000000 0.000000" );	

}

class CustomMission: MissionServer
{
	override void OnInit()
	{

		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(AdminsOnServer, 60000, true);		// 60 seconds
	}
	
	void AdminsOnServer()
	{
		string admins[] = {"76561198048981848", "76561198291848698", "76561197963191118", "76561198319315689"};
		string adminsName[] = { "Yamonpcquiplante", "EvilKevin", "Valgar74", "Bobuelwein" };
		string adminsOnline;
		
		int numadmins = 0;
		string messPlayers;
		ref array<Man> players = new array<Man>;
		GetGame().GetPlayers( players );
		int numPlayers = players.Count();
		
		for ( int i = 0; i < players.Count(); ++i )
		{
			Man player = players.Get(i);
			if( player )
			{
				string GUID=player.GetIdentity().GetPlainId();
				for ( int j = 0; j < 4; ++j )
				{
					if (GUID == admins[j])
					{
						adminsOnline = adminsOnline + " " +adminsName[j];
						++numadmins;
					}
				}					
			}
		}
		
		switch(numadmins){
			case 0 :
				messPlayers = "No admin online but you may not be alone...";
			break
			
			case 1 : 	
				messPlayers = numadmins.ToString() + " admin online : " + adminsOnline;	
			break
					
			default :
					messPlayers = numadmins.ToString() + " admins online : " + adminsOnline;		
		}
		
		for ( int k = 0; k < players.Count(); ++k )
		{
			Man player2 = players.Get(k);
			if( player2 )
			{
				Param1<string> m_MessageParam = new Param1<string>(messPlayers); 
				GetGame().RPCSingleParam(player2, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam, true, player2.GetIdentity()); 
			}
		}
		
	}
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.99, 1.0 );
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
		//player.RemoveAllItems();
/*		EntityAI itemClothing;
		EntityAI itemEnt;
		
		EntityAI boots;	
		
		ItemBase itemBs;
		float rand;

		if ( itemClothing )
		{
		itemClothing = player.FindAttachmentBySlotName( "Body" );	
			itemEnt = itemClothing.GetInventory().CreateInInventory( "Rag" );
			if ( Class.CastTo( itemBs, itemEnt ) )
				itemBs.SetQuantity( 4 );

			SetRandomHealth( itemEnt );

			string chemlightArray[] = { "Chemlight_White", "Chemlight_Yellow", "Chemlight_Green", "Chemlight_Red" };
			int rndIndex = Math.RandomInt( 0, 4 );
			itemEnt = itemClothing.GetInventory().CreateInInventory( chemlightArray[rndIndex] );
			SetRandomHealth( itemEnt );

			rand = Math.RandomFloatInclusive( 0.0, 1.0 );
			if ( rand < 0.35 )
				itemEnt = player.GetInventory().CreateInInventory( "Apple" );
			else if ( rand > 0.65 )
				itemEnt = player.GetInventory().CreateInInventory( "Pear" );
			else
				itemEnt = player.GetInventory().CreateInInventory( "Plum" );

			SetRandomHealth( itemEnt );
		}
		
		itemClothing = player.FindAttachmentBySlotName( "Legs" );
		if ( itemClothing )
			SetRandomHealth( itemClothing );
		
		//itemClothing = player.FindAttachmentBySlotName( "Feet" );
		
		//création des chaussures
		string bootsArray[] = { "Sneakers_Red", "Sneakers_Gray", "Sneakers_Green", "Sneakers_Black", "Sneakers_White" };
		int rndIndex3 = Math.RandomInt(0, 5);
		boots = player.GetInventory().CreateInInventory(bootsArray[rndIndex3]);
	}
		//player.SetQuickBarEntityShortcut( bat, 3, true );		*/
	
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
		
		ItemBase itemBs;
		float rand;
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

		

			            	// Assignation des raccourcis
			player.SetQuickBarEntityShortcut( pistol, 0, true );
			player.SetQuickBarEntityShortcut( magPistol, 1, true );
			player.SetQuickBarEntityShortcut( rounds, 2, true );
			player.SetQuickBarEntityShortcut( bat, 3, true );
			player.SetQuickBarEntityShortcut( medic, 4, true );
					
	}

		
	
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}