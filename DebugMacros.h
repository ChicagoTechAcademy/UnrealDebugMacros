#pragma once

#define DRAW_SPHERE(Location) if (GetWorld()) {DrawDebugSphere(GetWorld(), Location, 20.f, 24, FColor::Red, true);}

#define DRAW_LINE(Location, EndPoint) if (GetWorld()) { DrawDebugLine(GetWorld(), Location, EndPoint, FColor::Red, true, -1.f, 0, 1.f); }

#define DRAW_POINT(Location) if (GetWorld()) { DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true); }

#define DRAW_VECTOR(Location, EndPoint) if (GetWorld()) \
{ \
	DrawDebugLine(GetWorld(), Location, EndPoint, FColor::Red, true, -1.f, 0, 1.f); \
	DrawDebugPoint(GetWorld(), EndPoint, 15.f, FColor::Red, true); \
}

#define ONSCREEN_DEBUG(Message) if (GEngine){GEngine->AddOnScreenDebugMessage(1, 60.0f, FColor::Cyan, FString(Message));}
