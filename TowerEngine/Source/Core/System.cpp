#include "System.h"

System::System()
{
	InitWindow(1280, 720, "Tower Engine");
	SetTargetFPS(MAX_FPS);
}

void System::InitializeActors()
{
	//Execute Start on every actor in game
	for (int i = 0; i != actors.size(); i++)
	{
		actors[i]->StartComponents();
	}
}

void System::SpawnActor(Actor* actor)
{
	//Actor* actor = new Actor();
	actors.push_back(actor);
}

void System::HandleInput()
{
}

void System::TickActorComponents()
{
	for (int i = 0; i != actors.size(); i++)
	{
		actors[i]->UpdateComponents();
	}
}

void System::UpdateRendererComponentsDraw()
{
	BeginDrawing();
	ClearBackground(DARKPURPLE);

	for (int i = 0; i != actors.size(); i++)
	{
		std::vector<RendererComponent*> rendererComponents = actors[i]->GetAllRendererComponents();
		
		for (int x = 0; x != rendererComponents.size(); x++)
		{
			rendererComponents[x]->DrawUpdate();
		}
	}

	DrawFPS(100, 100);

	EndDrawing();
}


