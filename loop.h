// add the rest urself

void loop()
{
	BOOL cum = FALSE;
	std::vector<PVOID> lclactr;
	do {

		auto U_World = _offsets.UWorld;
		if (!U_World) break;

		auto gameinstance = reading(U_World, _offsets.GameInstance);
		if (!gameinstance) break;

		auto localplayer = reading(gameinstance, _offsets.LocalPlayers);
		if (!localplayer) break;

		auto playercontroller = reading(localplayer, _offsets.PlayerController);
		if (!playercontroller) break;

		auto playerpawn = reading(playercontroller, _offsets.AcknowledgedPawn);
		if (!playerpawn) break;

		auto playerstate = reading(playerpawn, _offsets.PlayerState);
		if (!playerstate) break;

		for (auto level_loop = 0UL; level_loop < readdword(U_World, _offsets.Levels + sizeof(PVOID)); ++level_loop) {

			auto leveling = reading(U_World, 0x138);
			if (!leveling) break;

			auto levels = reading(leveling, level_loop * sizeof(PVOID));
			if (!levels) continue;

			auto level = reading(levels, level_loop * sizeof(PVOID));
			if (!level) continue;

			for (auto actor_loops = 0UL; actor_loops < readdword(level, _offsets.AActors + sizeof(PVOID)); ++actor_loops) {
				auto actors = reading(level, _offsets.AActors);
				if (!actors) break;

			}

		} 
	} while (FALSE);
}

// kinda maven
