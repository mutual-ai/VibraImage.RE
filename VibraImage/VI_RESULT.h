﻿#pragma once
/// <summary>
/// Список допустимых значений переменной res, используемых в программе
/// </summary>
enum
{
	VI_RESULT_SRC_0 = 0,

	VI_RESULT_SRC_A,
	VI_RESULT_DELTA_A,
	VI_RESULT_DELTA_FA,
	VI_RESULT_VI0_A,
	VI_RESULT_VI1_A,
	VI_RESULT_VI2_A,

	VI_RESULT_SRC_B,
	VI_RESULT_DELTA_B,
	VI_RESULT_DELTA_FA,
	VI_RESULT_VI0_B,
	VI_RESULT_VI1_B,
	VI_RESULT_VI2_B,

	VI_RESULT_SRC_MASK = VI_RESULT_SRC_A + VI_RESULT_SRC_B,
	VI_RESULT_DELTA_MASK = VI_RESULT_DELTA_A + VI_RESULT_DELTA_B,
};