using UnrealBuildTool;

public class ThinkerciseTarget : TargetRules
{
	public ThinkerciseTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Thinkercise");
	}
}
