struct offsets
{
	PVOID* UWorld = 0; // must be a sig
	DWORD LocalPlayers = 0x38;
	DWORD AcknowledgedPawn = 0x2A0;
  DWORD GameInstance = 0x180;
	DWORD PersistentLevel = 0x30;
	DWORD ActorCount = 0xA0;
	DWORD PlayerCameraManager = 0x2B8;
	DWORD Mesh = 0x280;
	DWORD TeamIndex = 0xE88;
	DWORD RootComponent = 0x130;
  DWORD PlayerState = 0x240;
	DWORD RelativeLocation = 0x11C;
  DWORD AActors = 0x98;
  DWORD PlayerController = 0x30;
	DWORD Levels = 0x138;
};
offsets _offsets;

#define reading(base, offset) (*(PVOID *)(((PBYTE)base + offset)))
#define readdword(base, offset) (*(PDWORD)(((PBYTE)base + offset)))
