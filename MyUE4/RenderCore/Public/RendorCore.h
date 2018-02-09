
class FTimer
{
public:
	FTimer() 
		: CurrentDeltaTime(0.0f)
		, CurrentTime(0.0f)
	{
	}

	float GetCurrentTime()
	{
		return CurrentTime;
	}

	float GetCurrentDeltaTime()
	{
		return CurrentDeltaTime;
	}

	void Tick(float DeltaTime)
	{
		CurrentDeltaTime = DeltaTime;
		CurrentTime += DeltaTime;
	}

protected:
	float CurrentDeltaTime;
	float CurrentTime;
};


namespace ERenderThreadIdleTypes
{
	enum Type
	{
		WaittingForAllOtherSleep,
		WaittingForGPUQuery,
		WaittingForGPUPresent,
		Num
	};
}