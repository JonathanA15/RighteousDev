#ifndef RIGHTEOUSPLAYERPARTY_H_
#define RIGHTEOUSPLAYERPARTY_H_

class SkillSys
{
	private:
		std::vector<int>PlayerParty;

	public:
		RSP(){};
		RSP(RSP const& RSP);
		~RSP(){};

		void newParty();
		void AddMember();
		void RemoveMember();

}


#endif