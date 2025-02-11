#pragma once

//https://github.com/ChicagoTechAcademy/UnrealDebugMacros

#define ONSCREEN_DEBUG(Message) if (GEngine){GEngine->AddOnScreenDebugMessage(1, 60.0f, FColor::Cyan, FString(Message));}

#define DRAW_SPHERE(Location) if(GetWorld()){ DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Red, true);}

#define DRAW_SPHERE_SINGLEFRAME(Location) if(GetWorld()){ DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Red, false, -1.f);}

#define DRAW_LINE(Location, EndPoint) if (GetWorld()) { DrawDebugLine(GetWorld(), Location, EndPoint, FColor::Red, true, -1.f, 0, 1.f); }
#define DRAW_LINE_SINGLEFRAME(Location, EndPoint) if (GetWorld()) { DrawDebugLine(GetWorld(), Location, EndPoint, FColor::Red, false, -1.f, 0, 1.f); }

#define DRAW_POINT(Location) if (GetWorld()) { DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true); }
#define DRAW_POINT_SINGLEFRAME(Location) if (GetWorld()) { DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, false, -1.f); }

#define DRAW_VECTOR(Location, EndPoint) if (GetWorld()) \
{ \
	DrawDebugLine(GetWorld(), Location, EndPoint, FColor::Red, true, -1.f, 0, 1.f); \
	DrawDebugPoint(GetWorld(), EndPoint, 15.f, FColor::Red, true); \
}

#define DRAW_VECTOR_SINGLEFRAME(Location, EndPoint) if (GetWorld()) \
{ \
	DrawDebugLine(GetWorld(), Location, EndPoint, FColor::Red, false, -1.f, 0, 1.f); \
	DrawDebugPoint(GetWorld(), EndPoint, 15.f, FColor::Red, false, -1.f); \
}
