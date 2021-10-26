#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_3(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_19(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_4135093114108672919);
void live_err_fun(double *nom_x, double *delta_x, double *out_1521961251170734823);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_597177388830569989);
void live_H_mod_fun(double *state, double *out_1998250801939596736);
void live_f_fun(double *state, double dt, double *out_572768796813323228);
void live_F_fun(double *state, double dt, double *out_1666855734308241865);
void live_h_3(double *state, double *unused, double *out_2764938996493130375);
void live_H_3(double *state, double *unused, double *out_765642860074900656);
void live_h_4(double *state, double *unused, double *out_6937898962286234915);
void live_H_4(double *state, double *unused, double *out_9218675120596441530);
void live_h_9(double *state, double *unused, double *out_7476081473568841575);
void live_H_9(double *state, double *unused, double *out_2497812193741217432);
void live_h_10(double *state, double *unused, double *out_246095310976525989);
void live_H_10(double *state, double *unused, double *out_1301549897518004322);
void live_h_12(double *state, double *unused, double *out_4820350353933966809);
void live_H_12(double *state, double *unused, double *out_7112119608857231961);
void live_h_31(double *state, double *unused, double *out_5164992704802168671);
void live_H_31(double *state, double *unused, double *out_5388852001016283654);
void live_h_32(double *state, double *unused, double *out_8153716801058475422);
void live_H_32(double *state, double *unused, double *out_5529680170271766969);
void live_h_13(double *state, double *unused, double *out_2384506622709632650);
void live_H_13(double *state, double *unused, double *out_6940181787094444049);
void live_h_14(double *state, double *unused, double *out_7476081473568841575);
void live_H_14(double *state, double *unused, double *out_2497812193741217432);
void live_h_19(double *state, double *unused, double *out_7094541049424893216);
void live_H_19(double *state, double *unused, double *out_1934867657361213749);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}