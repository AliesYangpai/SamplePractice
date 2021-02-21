#define _CRT_SECURE_NO_WARNINGS 1
#include "component_work_method.h"
void DoPlayGames(ComputerBase& computer) 
{
	computer.get_m_cpu().DoCpuCalculate();
	computer.get_m_gpu().DoGpuCalculate();
	computer.get_m_memory_bank().DoMemoryBankCalculate();
}