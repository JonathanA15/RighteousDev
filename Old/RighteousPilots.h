#ifndef RIGHTEOUSPILOTS_H_
#define RIGHTEOUSPILOTS_H_

class Pilot
{
	private:
		std::string pilotName;
		std::string pilotBio;

		float PilotAccuracy;
		int pilotSkillCapacity;
		int *KnownSkills;

	public:
		Pilot(){};
		Pilot(Pilot const& Pilot);
		~Pilot(){};

}

#endif