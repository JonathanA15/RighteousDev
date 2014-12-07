#ifndef RIGHTEOUSLEVELSYSTEM_H_
#define RIGHTEOUSLEVELSYSTEM_H_

class RLevelSystem
{
	private:
		std::vector<int>PlayerParty;

	public:
		RLevelSystem(){};
		RLevelSystem(RSP const& RSP);
		~RLevelSystem(){};

		void newParty();
		void AddMember();
		void RemoveMember();

}

#endif