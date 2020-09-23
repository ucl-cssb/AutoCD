#include <array>
#include <iostream>
#include <vector>
#include <math.h>
#include "model.h"

Models::Models() {
	 models_ublas_vec = {&Models::model_0, &Models::model_1, &Models::model_2, &Models::model_3, &Models::model_4, &Models::model_5, &Models::model_6, &Models::model_7, &Models::model_8, &Models::model_9, &Models::model_10, &Models::model_11, &Models::model_12, &Models::model_13, &Models::model_14, &Models::model_15, &Models::model_16, &Models::model_17, &Models::model_18, &Models::model_19, &Models::model_20, &Models::model_21, &Models::model_22, &Models::model_23, &Models::model_24, &Models::model_25, &Models::model_26, &Models::model_27, &Models::model_28, &Models::model_29, &Models::model_30, &Models::model_31, &Models::model_32, &Models::model_33, &Models::model_34, &Models::model_35, &Models::model_36, &Models::model_37, &Models::model_38, &Models::model_39, &Models::model_40, &Models::model_41, &Models::model_42, &Models::model_43, &Models::model_44, &Models::model_45, &Models::model_46, &Models::model_47, &Models::model_48, &Models::model_49, &Models::model_50, &Models::model_51, &Models::model_52, &Models::model_53, &Models::model_54, &Models::model_55, &Models::model_56, &Models::model_57, &Models::model_58, &Models::model_59, &Models::model_60, &Models::model_61, &Models::model_62, &Models::model_63, &Models::model_64, &Models::model_65, &Models::model_66, &Models::model_67, &Models::model_68, &Models::model_69, &Models::model_70, &Models::model_71, &Models::model_72, &Models::model_73, &Models::model_74, &Models::model_75, &Models::model_76, &Models::model_77, &Models::model_78, &Models::model_79, &Models::model_80, &Models::model_81, &Models::model_82, &Models::model_83, &Models::model_84, &Models::model_85, &Models::model_86, &Models::model_87, &Models::model_88, &Models::model_89, &Models::model_90, &Models::model_91, &Models::model_92, &Models::model_93, &Models::model_94, &Models::model_95, &Models::model_96, &Models::model_97, &Models::model_98, &Models::model_99, &Models::model_100, &Models::model_101, &Models::model_102, &Models::model_103, &Models::model_104, &Models::model_105, &Models::model_106, &Models::model_107, &Models::model_108, &Models::model_109, &Models::model_110, &Models::model_111, &Models::model_112, &Models::model_113, &Models::model_114, &Models::model_115, &Models::model_116, &Models::model_117, &Models::model_118, &Models::model_119, &Models::model_120, &Models::model_121, &Models::model_122, &Models::model_123, &Models::model_124, &Models::model_125, &Models::model_126, &Models::model_127, &Models::model_128, &Models::model_129, &Models::model_130, &Models::model_131};
	 models_jac_vec = {&Models::jac_0, &Models::jac_1, &Models::jac_2, &Models::jac_3, &Models::jac_4, &Models::jac_5, &Models::jac_6, &Models::jac_7, &Models::jac_8, &Models::jac_9, &Models::jac_10, &Models::jac_11, &Models::jac_12, &Models::jac_13, &Models::jac_14, &Models::jac_15, &Models::jac_16, &Models::jac_17, &Models::jac_18, &Models::jac_19, &Models::jac_20, &Models::jac_21, &Models::jac_22, &Models::jac_23, &Models::jac_24, &Models::jac_25, &Models::jac_26, &Models::jac_27, &Models::jac_28, &Models::jac_29, &Models::jac_30, &Models::jac_31, &Models::jac_32, &Models::jac_33, &Models::jac_34, &Models::jac_35, &Models::jac_36, &Models::jac_37, &Models::jac_38, &Models::jac_39, &Models::jac_40, &Models::jac_41, &Models::jac_42, &Models::jac_43, &Models::jac_44, &Models::jac_45, &Models::jac_46, &Models::jac_47, &Models::jac_48, &Models::jac_49, &Models::jac_50, &Models::jac_51, &Models::jac_52, &Models::jac_53, &Models::jac_54, &Models::jac_55, &Models::jac_56, &Models::jac_57, &Models::jac_58, &Models::jac_59, &Models::jac_60, &Models::jac_61, &Models::jac_62, &Models::jac_63, &Models::jac_64, &Models::jac_65, &Models::jac_66, &Models::jac_67, &Models::jac_68, &Models::jac_69, &Models::jac_70, &Models::jac_71, &Models::jac_72, &Models::jac_73, &Models::jac_74, &Models::jac_75, &Models::jac_76, &Models::jac_77, &Models::jac_78, &Models::jac_79, &Models::jac_80, &Models::jac_81, &Models::jac_82, &Models::jac_83, &Models::jac_84, &Models::jac_85, &Models::jac_86, &Models::jac_87, &Models::jac_88, &Models::jac_89, &Models::jac_90, &Models::jac_91, &Models::jac_92, &Models::jac_93, &Models::jac_94, &Models::jac_95, &Models::jac_96, &Models::jac_97, &Models::jac_98, &Models::jac_99, &Models::jac_100, &Models::jac_101, &Models::jac_102, &Models::jac_103, &Models::jac_104, &Models::jac_105, &Models::jac_106, &Models::jac_107, &Models::jac_108, &Models::jac_109, &Models::jac_110, &Models::jac_111, &Models::jac_112, &Models::jac_113, &Models::jac_114, &Models::jac_115, &Models::jac_116, &Models::jac_117, &Models::jac_118, &Models::jac_119, &Models::jac_120, &Models::jac_121, &Models::jac_122, &Models::jac_123, &Models::jac_124, &Models::jac_125, &Models::jac_126, &Models::jac_127, &Models::jac_128, &Models::jac_129, &Models::jac_130, &Models::jac_131};
};

void Models::run_model_ublas(const ublas_vec_t &y , ublas_vec_t &dxdt , double t, std::vector <double> &part_params, int &model_ref)
{
	(this->*models_ublas_vec[model_ref])(y, dxdt, t, part_params);
}

void Models::run_jac(const ublas_vec_t & x , ublas_mat_t &J , const double & t , ublas_vec_t &dfdt, std::vector <double> &part_params, int &model_ref)
{
	(this->*models_jac_vec[model_ref])(x, J, t, dfdt, part_params);
}

void Models::model_0(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_0(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_1(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_1(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_2(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_2(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_3(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_3(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_4(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_4(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_5(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_5(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_6(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_6(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_7(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_7(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_8(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_8(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_9(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_9(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_10(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_10(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_11(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_11(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_12(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_12(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_13(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_13(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_14(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_14(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_15(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_15(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_16(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_16(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_17(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_17(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_18(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_18(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_19(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_19(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_20(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_I_1 = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_20(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_I_1 = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_21(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double nI_1 = part_params[16];
	const double omega_max = part_params[17];
	const double S0_glu = part_params[18];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_21(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double nI_1 = part_params[16];
	const double omega_max = part_params[17];
	const double S0_glu = part_params[18];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_22(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_22(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_23(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_23(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_24(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_I_1 = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_24(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_I_1 = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_25(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double nI_1 = part_params[16];
	const double omega_max = part_params[17];
	const double S0_glu = part_params[18];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));

}
void Models::jac_25(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double nI_1 = part_params[16];
	const double omega_max = part_params[17];
	const double S0_glu = part_params[18];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_26(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_26(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_27(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_27(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_28(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_B_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_28(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_B_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = 0;
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_29(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double kA_1 = part_params[6];
	const double kB_max_1 = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_B_1 = part_params[10];
	const double n_omega_B = part_params[11];
	const double omega_max = part_params[12];
	const double S0_glu = part_params[13];

	//Species order is: N_1 N_2 S_glu B_1 A_1 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;

}
void Models::jac_29(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double kA_1 = part_params[6];
	const double kB_max_1 = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_B_1 = part_params[10];
	const double n_omega_B = part_params[11];
	const double omega_max = part_params[12];
	const double S0_glu = part_params[13];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;

}
void Models::model_30(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_30(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_31(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_31(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_32(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_32(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_33(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_33(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_34(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_34(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_35(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_35(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_36(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_36(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_37(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_37(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_38(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_B_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_38(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_B_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = 0;
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_39(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double kA_1 = part_params[6];
	const double kB_max_1 = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_B_1 = part_params[10];
	const double n_omega_B = part_params[11];
	const double omega_max = part_params[12];
	const double S0_glu = part_params[13];

	//Species order is: N_1 N_2 S_glu B_1 A_1 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = std::pow(y[4], n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)) - y[3]*D;
	dydt[4] = -y[4]*D + y[0]*kA_1;

}
void Models::jac_39(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double kA_1 = part_params[6];
	const double kB_max_1 = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_B_1 = part_params[10];
	const double n_omega_B = part_params[11];
	const double omega_max = part_params[12];
	const double S0_glu = part_params[13];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 3 , 0 ) = std::pow(y[4], n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], 2*n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2)) + std::pow(y[4], n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1)));
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;

}
void Models::model_40(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_40(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_41(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_41(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_42(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_42(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_43(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_43(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_44(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_44(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_45(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_45(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_46(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_46(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_47(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_47(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_48(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_48(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_49(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_49(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_50(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_50(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_51(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_51(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_52(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_52(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_53(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_53(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double K_A_V_1T = part_params[6];
	const double k_I_1 = part_params[7];
	const double K_mu_glu = part_params[8];
	const double k_omega_B_1 = part_params[9];
	const double k_omega_T_1T = part_params[10];
	const double k_TV_ann = part_params[11];
	const double kA_1 = part_params[12];
	const double kB_max_1 = part_params[13];
	const double kI_max_1 = part_params[14];
	const double kT_max_1T = part_params[15];
	const double kV_max_1T = part_params[16];
	const double mu_max_1 = part_params[17];
	const double mu_max_2 = part_params[18];
	const double n_A_B_1 = part_params[19];
	const double n_A_I_1 = part_params[20];
	const double n_A_T_1T = part_params[21];
	const double n_A_V_1T = part_params[22];
	const double n_omega_B = part_params[23];
	const double n_omega_T = part_params[24];
	const double nI_1 = part_params[25];
	const double omega_max = part_params[26];
	const double omega_T_max = part_params[27];
	const double S0_glu = part_params[28];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_54(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_54(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_B_1 = part_params[18];
	const double n_A_I_1 = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_55(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_55(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_56(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_56(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_57(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_57(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_58(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_58(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_59(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_59(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_60(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_I_1 = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_60(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_I_1 = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_61(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double nI_1 = part_params[16];
	const double omega_max = part_params[17];
	const double S0_glu = part_params[18];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_61(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double nI_1 = part_params[16];
	const double omega_max = part_params[17];
	const double S0_glu = part_params[18];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_62(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_62(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_63(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_63(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double K_A_T_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_T_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_64(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_I_1 = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_64(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_I_1 = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_65(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double nI_1 = part_params[16];
	const double omega_max = part_params[17];
	const double S0_glu = part_params[18];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));

}
void Models::jac_65(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_I_1 = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double nI_1 = part_params[16];
	const double omega_max = part_params[17];
	const double S0_glu = part_params[18];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_66(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_66(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_67(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_67(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_68(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_B_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_68(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_B_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = 0;
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_69(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double kA_1 = part_params[6];
	const double kB_max_1 = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_B_1 = part_params[10];
	const double n_omega_B = part_params[11];
	const double omega_max = part_params[12];
	const double S0_glu = part_params[13];

	//Species order is: N_1 N_2 S_glu B_1 A_1 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;

}
void Models::jac_69(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double kA_1 = part_params[6];
	const double kB_max_1 = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_B_1 = part_params[10];
	const double n_omega_B = part_params[11];
	const double omega_max = part_params[12];
	const double S0_glu = part_params[13];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;

}
void Models::model_70(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_70(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_71(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_71(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_72(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_72(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_73(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_73(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_74(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_74(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_B_1 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_max = part_params[21];
	const double omega_T_max = part_params[22];
	const double S0_glu = part_params[23];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_75(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_75(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_B_1 = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_76(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_76(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_77(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_77(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_B_1 = part_params[13];
	const double n_A_T_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_78(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_B_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_78(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_B_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = 0;
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_79(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double kA_1 = part_params[6];
	const double kB_max_1 = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_B_1 = part_params[10];
	const double n_omega_B = part_params[11];
	const double omega_max = part_params[12];
	const double S0_glu = part_params[13];

	//Species order is: N_1 N_2 S_glu B_1 A_1 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	dydt[4] = -y[4]*D + y[0]*kA_1;

}
void Models::jac_79(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_B_1 = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double kA_1 = part_params[6];
	const double kB_max_1 = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_B_1 = part_params[10];
	const double n_omega_B = part_params[11];
	const double omega_max = part_params[12];
	const double S0_glu = part_params[13];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 3 , 0 ) = std::pow(K_A_B_1, n_A_B_1)*kB_max_1/(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1));
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = -std::pow(y[4], n_A_B_1)*std::pow(K_A_B_1, n_A_B_1)*y[0]*kB_max_1*n_A_B_1/(y[4]*std::pow(std::pow(y[4], n_A_B_1) + std::pow(K_A_B_1, n_A_B_1), 2));
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;

}
void Models::model_80(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_80(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_81(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_81(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_82(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double kV_max_1T = part_params[14];
	const double mu_max_1 = part_params[15];
	const double mu_max_2 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_82(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double kV_max_1T = part_params[14];
	const double mu_max_1 = part_params[15];
	const double mu_max_2 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_83(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_83(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_84(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_84(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_85(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double kV_max_1T = part_params[14];
	const double mu_max_1 = part_params[15];
	const double mu_max_2 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_85(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double kV_max_1T = part_params[14];
	const double mu_max_1 = part_params[15];
	const double mu_max_2 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_86(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_86(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_87(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_87(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_88(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double kV_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_88(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double kV_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_89(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_89(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_90(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_90(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_91(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double kV_max_1T = part_params[14];
	const double mu_max_1 = part_params[15];
	const double mu_max_2 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_91(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double kV_max_1T = part_params[14];
	const double mu_max_1 = part_params[15];
	const double mu_max_2 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_92(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_92(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_93(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;

}
void Models::jac_93(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double k_I_1 = part_params[6];
	const double K_mu_glu = part_params[7];
	const double k_omega_B_1 = part_params[8];
	const double k_omega_T_1T = part_params[9];
	const double k_TV_ann = part_params[10];
	const double kA_1 = part_params[11];
	const double kB_max_1 = part_params[12];
	const double kI_max_1 = part_params[13];
	const double kT_max_1T = part_params[14];
	const double kV_max_1T = part_params[15];
	const double mu_max_1 = part_params[16];
	const double mu_max_2 = part_params[17];
	const double n_A_I_1 = part_params[18];
	const double n_A_T_1T = part_params[19];
	const double n_A_V_1T = part_params[20];
	const double n_omega_B = part_params[21];
	const double n_omega_T = part_params[22];
	const double nI_1 = part_params[23];
	const double omega_max = part_params[24];
	const double omega_T_max = part_params[25];
	const double S0_glu = part_params[26];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_94(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double kV_max_1T = part_params[14];
	const double mu_max_1 = part_params[15];
	const double mu_max_2 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[6]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[7] = -1.0/2.0*y[2]*y[7]*mu_max_1/(K_mu_glu + y[2]) - y[7]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_94(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kB_max_1 = part_params[11];
	const double kI_max_1 = part_params[12];
	const double kT_max_1T = part_params[13];
	const double kV_max_1T = part_params[14];
	const double mu_max_1 = part_params[15];
	const double mu_max_2 = part_params[16];
	const double n_A_I_1 = part_params[17];
	const double n_A_V_1T = part_params[18];
	const double n_omega_B = part_params[19];
	const double n_omega_T = part_params[20];
	const double nI_1 = part_params[21];
	const double omega_max = part_params[22];
	const double omega_T_max = part_params[23];
	const double S0_glu = part_params[24];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[3], n_omega_B)*std::pow(y[6], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[6]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[6], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[7]*k_TV_ann;
	J( 5 , 6 ) = 0;
	J( 5 , 7 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[6]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_1/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = -y[7]*k_TV_ann;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_95(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_95(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_96(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_96(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_97(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double kV_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_97(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double kV_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_98(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_I_1 = part_params[15];
	const double n_A_T_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_98(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_I_1 = part_params[15];
	const double n_A_T_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_99(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_I_1 = part_params[15];
	const double n_A_T_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_99(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_I_1 = part_params[15];
	const double n_A_T_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_100(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double k_I_1 = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double nI_1 = part_params[17];
	const double omega_max = part_params[18];
	const double omega_T_max = part_params[19];
	const double S0_glu = part_params[20];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_100(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double k_I_1 = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double nI_1 = part_params[17];
	const double omega_max = part_params[18];
	const double omega_T_max = part_params[19];
	const double S0_glu = part_params[20];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_101(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double k_I_1 = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kI_max_1 = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_I_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double nI_1 = part_params[14];
	const double omega_max = part_params[15];
	const double S0_glu = part_params[16];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)) - 1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_101(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double k_I_1 = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kI_max_1 = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_I_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double nI_1 = part_params[14];
	const double omega_max = part_params[15];
	const double S0_glu = part_params[16];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2)) + std::pow(y[4], n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_102(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_I_1 = part_params[15];
	const double n_A_T_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_102(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_I_1 = part_params[15];
	const double n_A_T_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_103(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_I_1 = part_params[15];
	const double n_A_T_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_103(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double K_A_T_1T = part_params[4];
	const double k_I_1 = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_B_1 = part_params[7];
	const double k_omega_T_1T = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kI_max_1 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_I_1 = part_params[15];
	const double n_A_T_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double nI_1 = part_params[19];
	const double omega_max = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_104(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double k_I_1 = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double nI_1 = part_params[17];
	const double omega_max = part_params[18];
	const double omega_T_max = part_params[19];
	const double S0_glu = part_params[20];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_104(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double k_I_1 = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kI_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_I_1 = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double nI_1 = part_params[17];
	const double omega_max = part_params[18];
	const double omega_T_max = part_params[19];
	const double S0_glu = part_params[20];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 6 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = 0;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_105(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double k_I_1 = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kI_max_1 = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_I_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double nI_1 = part_params[14];
	const double omega_max = part_params[15];
	const double S0_glu = part_params[16];

	//Species order is: N_1 N_2 S_glu B_1 A_1 I_1 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = -1.0/2.0*y[5]*y[2]*mu_max_1/(K_mu_glu + y[2]) + std::pow(K_A_I_1, n_A_I_1)*kI_max_1/(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1));

}
void Models::jac_105(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_I_1 = part_params[3];
	const double k_I_1 = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kI_max_1 = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_I_1 = part_params[12];
	const double n_omega_B = part_params[13];
	const double nI_1 = part_params[14];
	const double omega_max = part_params[15];
	const double S0_glu = part_params[16];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*std::pow(k_I_1, nI_1)*omega_max/((std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1))) - std::pow(y[3], n_omega_B)*y[0]*std::pow(k_I_1, nI_1)*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[3], n_omega_B)*std::pow(y[5], nI_1)*y[0]*std::pow(k_I_1, nI_1)*nI_1*omega_max/(y[5]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B))*std::pow(std::pow(y[5], nI_1) + std::pow(k_I_1, nI_1), 2));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[5]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_I_1)*std::pow(K_A_I_1, n_A_I_1)*kI_max_1*n_A_I_1/(y[4]*std::pow(std::pow(y[4], n_A_I_1) + std::pow(K_A_I_1, n_A_I_1), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_106(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_T_1T = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_106(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_T_1T = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_107(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_T_1T = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_107(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_T_1T = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_108(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_108(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_109(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_109(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_110(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double kV_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_110(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double kV_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_111(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_111(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_112(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;

}
void Models::jac_112(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_B_1 = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kB_max_1 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kV_max_1T = part_params[12];
	const double mu_max_1 = part_params[13];
	const double mu_max_2 = part_params[14];
	const double n_A_T_1T = part_params[15];
	const double n_A_V_1T = part_params[16];
	const double n_omega_B = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_max = part_params[19];
	const double omega_T_max = part_params[20];
	const double S0_glu = part_params[21];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_113(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double kV_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	//Species order is: N_1 N_2 S_glu B_1 A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;

}
void Models::jac_113(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kB_max_1 = part_params[9];
	const double kT_max_1T = part_params[10];
	const double kV_max_1T = part_params[11];
	const double mu_max_1 = part_params[12];
	const double mu_max_2 = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_B = part_params[15];
	const double n_omega_T = part_params[16];
	const double omega_max = part_params[17];
	const double omega_T_max = part_params[18];
	const double S0_glu = part_params[19];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;

}
void Models::model_114(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_T_1T = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(y[4], n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_114(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_T_1T = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[4], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_115(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_T_1T = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu B_1 A_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -y[4]*D + y[0]*kA_1;
	dydt[5] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_115(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_B_1 = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double kA_1 = part_params[7];
	const double kB_max_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_T_1T = part_params[12];
	const double n_omega_B = part_params[13];
	const double n_omega_T = part_params[14];
	const double omega_max = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = kA_1;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[4]*std::pow(std::pow(y[4], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_116(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_mu_glu = part_params[3];
	const double k_omega_B_1 = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double kB_max_1 = part_params[6];
	const double kT_max_1T = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_omega_B = part_params[10];
	const double n_omega_T = part_params[11];
	const double omega_max = part_params[12];
	const double omega_T_max = part_params[13];
	const double S0_glu = part_params[14];

	//Species order is: N_1 N_2 S_glu B_1 T_1T 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[4], n_omega_T)*omega_T_max/(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -1.0/2.0*y[2]*y[4]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_116(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_mu_glu = part_params[3];
	const double k_omega_B_1 = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double kB_max_1 = part_params[6];
	const double kT_max_1T = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_omega_B = part_params[10];
	const double n_omega_T = part_params[11];
	const double omega_max = part_params[12];
	const double omega_T_max = part_params[13];
	const double S0_glu = part_params[14];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 0 , 4 ) = std::pow(y[4], 2*n_omega_T)*n_omega_T*omega_T_max/(y[4]*std::pow(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[4], n_omega_T)*n_omega_T*omega_T_max/(y[4]*(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = (1.0/2.0)*y[2]*y[4]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[4]*mu_max_1/(K_mu_glu + y[2]);
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;

}
void Models::model_117(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_mu_glu = part_params[3];
	const double k_omega_B_1 = part_params[4];
	const double kB_max_1 = part_params[5];
	const double mu_max_1 = part_params[6];
	const double mu_max_2 = part_params[7];
	const double n_omega_B = part_params[8];
	const double omega_max = part_params[9];
	const double S0_glu = part_params[10];

	//Species order is: N_1 N_2 S_glu B_1 
	dydt[0] = -std::pow(y[3], n_omega_B)*y[0]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;

}
void Models::jac_117(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_mu_glu = part_params[3];
	const double k_omega_B_1 = part_params[4];
	const double kB_max_1 = part_params[5];
	const double mu_max_1 = part_params[6];
	const double mu_max_2 = part_params[7];
	const double n_omega_B = part_params[8];
	const double omega_max = part_params[9];
	const double S0_glu = part_params[10];

	J( 0 , 0 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[0]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;

}
void Models::model_118(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_mu_glu = part_params[3];
	const double k_omega_B_1 = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double kB_max_1 = part_params[6];
	const double kT_max_1T = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_omega_B = part_params[10];
	const double n_omega_T = part_params[11];
	const double omega_max = part_params[12];
	const double omega_T_max = part_params[13];
	const double S0_glu = part_params[14];

	//Species order is: N_1 N_2 S_glu B_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[4], n_omega_T)*omega_T_max/(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;
	dydt[4] = -1.0/2.0*y[2]*y[4]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_118(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_mu_glu = part_params[3];
	const double k_omega_B_1 = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double kB_max_1 = part_params[6];
	const double kT_max_1T = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_omega_B = part_params[10];
	const double n_omega_T = part_params[11];
	const double omega_max = part_params[12];
	const double omega_T_max = part_params[13];
	const double S0_glu = part_params[14];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = std::pow(y[4], 2*n_omega_T)*n_omega_T*omega_T_max/(y[4]*std::pow(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[4], n_omega_T)*n_omega_T*omega_T_max/(y[4]*(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 1 , 4 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = (1.0/2.0)*y[2]*y[4]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[4]*mu_max_1/(K_mu_glu + y[2]);
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;

}
void Models::model_119(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_mu_glu = part_params[3];
	const double k_omega_B_1 = part_params[4];
	const double kB_max_1 = part_params[5];
	const double mu_max_1 = part_params[6];
	const double mu_max_2 = part_params[7];
	const double n_omega_B = part_params[8];
	const double omega_max = part_params[9];
	const double S0_glu = part_params[10];

	//Species order is: N_1 N_2 S_glu B_1 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]);
	dydt[1] = -std::pow(y[3], n_omega_B)*y[1]*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kB_max_1;

}
void Models::jac_119(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_mu_glu = part_params[3];
	const double k_omega_B_1 = part_params[4];
	const double kB_max_1 = part_params[5];
	const double mu_max_1 = part_params[6];
	const double mu_max_2 = part_params[7];
	const double n_omega_B = part_params[8];
	const double omega_max = part_params[9];
	const double S0_glu = part_params[10];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -std::pow(y[3], n_omega_B)*omega_max/(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)) - D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = std::pow(y[3], 2*n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*std::pow(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B), 2)) - std::pow(y[3], n_omega_B)*y[1]*n_omega_B*omega_max/(y[3]*(std::pow(y[3], n_omega_B) + std::pow(k_omega_B_1, n_omega_B)));
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 3 , 0 ) = kB_max_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;

}
void Models::model_120(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double kV_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_T_1T = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_T = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = std::pow(y[3], n_A_V_1T)*kV_max_1T/(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[4]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann;
	dydt[5] = std::pow(y[3], n_A_T_1T)*kT_max_1T/(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann;

}
void Models::jac_120(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double kV_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_T_1T = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_T = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = (1.0/2.0)*y[2]*y[4]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[4]*mu_max_1/(K_mu_glu + y[2]);
	J( 4 , 3 ) = -std::pow(y[3], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*std::pow(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[3], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 4 , 4 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;
	J( 4 , 5 ) = -y[4]*k_TV_ann;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = -std::pow(y[3], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*std::pow(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[3], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 5 , 4 ) = -y[5]*k_TV_ann;
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[4]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_121(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double kV_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_T_1T = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_T = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = std::pow(y[3], n_A_V_1T)*kV_max_1T/(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[4]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann;
	dydt[5] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann;

}
void Models::jac_121(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double kV_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_T_1T = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_T = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = (1.0/2.0)*y[2]*y[4]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[4]*mu_max_1/(K_mu_glu + y[2]);
	J( 4 , 3 ) = -std::pow(y[3], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*std::pow(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[3], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 4 , 4 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;
	J( 4 , 5 ) = -y[4]*k_TV_ann;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = -std::pow(y[3], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*std::pow(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 5 , 4 ) = -y[5]*k_TV_ann;
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[4]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_122(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double k_TV_ann = part_params[6];
	const double kA_1 = part_params[7];
	const double kT_max_1T = part_params[8];
	const double kV_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_V_1T = part_params[12];
	const double n_omega_T = part_params[13];
	const double omega_T_max = part_params[14];
	const double S0_glu = part_params[15];

	//Species order is: N_1 N_2 S_glu A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = std::pow(y[3], n_A_V_1T)*kV_max_1T/(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[4]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann;
	dydt[5] = -1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann + kT_max_1T;

}
void Models::jac_122(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double k_TV_ann = part_params[6];
	const double kA_1 = part_params[7];
	const double kT_max_1T = part_params[8];
	const double kV_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_V_1T = part_params[12];
	const double n_omega_T = part_params[13];
	const double omega_T_max = part_params[14];
	const double S0_glu = part_params[15];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = (1.0/2.0)*y[2]*y[4]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[4]*mu_max_1/(K_mu_glu + y[2]);
	J( 4 , 3 ) = -std::pow(y[3], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*std::pow(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[3], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 4 , 4 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;
	J( 4 , 5 ) = -y[4]*k_TV_ann;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -y[5]*k_TV_ann;
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[4]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_123(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double kV_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_T_1T = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_T = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[4]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann;
	dydt[5] = std::pow(y[3], n_A_T_1T)*kT_max_1T/(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann;

}
void Models::jac_123(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double kV_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_T_1T = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_T = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = (1.0/2.0)*y[2]*y[4]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[4]*mu_max_1/(K_mu_glu + y[2]);
	J( 4 , 3 ) = -std::pow(y[3], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*std::pow(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 4 , 4 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;
	J( 4 , 5 ) = -y[4]*k_TV_ann;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = -std::pow(y[3], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*std::pow(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[3], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 5 , 4 ) = -y[5]*k_TV_ann;
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[4]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_124(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double kV_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_T_1T = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_T = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	//Species order is: N_1 N_2 S_glu A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[4]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann;
	dydt[5] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann;

}
void Models::jac_124(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_TV_ann = part_params[7];
	const double kA_1 = part_params[8];
	const double kT_max_1T = part_params[9];
	const double kV_max_1T = part_params[10];
	const double mu_max_1 = part_params[11];
	const double mu_max_2 = part_params[12];
	const double n_A_T_1T = part_params[13];
	const double n_A_V_1T = part_params[14];
	const double n_omega_T = part_params[15];
	const double omega_T_max = part_params[16];
	const double S0_glu = part_params[17];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = (1.0/2.0)*y[2]*y[4]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[4]*mu_max_1/(K_mu_glu + y[2]);
	J( 4 , 3 ) = -std::pow(y[3], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*std::pow(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 4 , 4 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;
	J( 4 , 5 ) = -y[4]*k_TV_ann;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = -std::pow(y[3], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*std::pow(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 5 , 4 ) = -y[5]*k_TV_ann;
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[4]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_125(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double k_TV_ann = part_params[6];
	const double kA_1 = part_params[7];
	const double kT_max_1T = part_params[8];
	const double kV_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_V_1T = part_params[12];
	const double n_omega_T = part_params[13];
	const double omega_T_max = part_params[14];
	const double S0_glu = part_params[15];

	//Species order is: N_1 N_2 S_glu A_1 V_1T T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[5], n_omega_T)*omega_T_max/(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T/(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[4]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann;
	dydt[5] = -1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[5]*y[4]*k_TV_ann + kT_max_1T;

}
void Models::jac_125(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_V_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double k_TV_ann = part_params[6];
	const double kA_1 = part_params[7];
	const double kT_max_1T = part_params[8];
	const double kV_max_1T = part_params[9];
	const double mu_max_1 = part_params[10];
	const double mu_max_2 = part_params[11];
	const double n_A_V_1T = part_params[12];
	const double n_omega_T = part_params[13];
	const double omega_T_max = part_params[14];
	const double S0_glu = part_params[15];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = std::pow(y[5], 2*n_omega_T)*n_omega_T*omega_T_max/(y[5]*std::pow(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[5], n_omega_T)*n_omega_T*omega_T_max/(y[5]*(std::pow(y[5], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = (1.0/2.0)*y[2]*y[4]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[4]*mu_max_1/(K_mu_glu + y[2]);
	J( 4 , 3 ) = -std::pow(y[3], n_A_V_1T)*std::pow(K_A_V_1T, n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*std::pow(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2));
	J( 4 , 4 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;
	J( 4 , 5 ) = -y[4]*k_TV_ann;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -y[5]*k_TV_ann;
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[4]*k_TV_ann;

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;

}
void Models::model_126(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double kA_1 = part_params[6];
	const double kT_max_1T = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_T_1T = part_params[10];
	const double n_omega_T = part_params[11];
	const double omega_T_max = part_params[12];
	const double S0_glu = part_params[13];

	//Species order is: N_1 N_2 S_glu A_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[4], n_omega_T)*omega_T_max/(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = std::pow(y[3], n_A_T_1T)*kT_max_1T/(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[4]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_126(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double kA_1 = part_params[6];
	const double kT_max_1T = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_T_1T = part_params[10];
	const double n_omega_T = part_params[11];
	const double omega_T_max = part_params[12];
	const double S0_glu = part_params[13];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = std::pow(y[4], 2*n_omega_T)*n_omega_T*omega_T_max/(y[4]*std::pow(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[4], n_omega_T)*n_omega_T*omega_T_max/(y[4]*(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = (1.0/2.0)*y[2]*y[4]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[4]*mu_max_1/(K_mu_glu + y[2]);
	J( 4 , 3 ) = -std::pow(y[3], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*std::pow(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[3], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 4 , 4 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;

}
void Models::model_127(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double kA_1 = part_params[6];
	const double kT_max_1T = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_T_1T = part_params[10];
	const double n_omega_T = part_params[11];
	const double omega_T_max = part_params[12];
	const double S0_glu = part_params[13];

	//Species order is: N_1 N_2 S_glu A_1 T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[4], n_omega_T)*omega_T_max/(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T/(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[4]*mu_max_1/(K_mu_glu + y[2]);

}
void Models::jac_127(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_mu_glu = part_params[4];
	const double k_omega_T_1T = part_params[5];
	const double kA_1 = part_params[6];
	const double kT_max_1T = part_params[7];
	const double mu_max_1 = part_params[8];
	const double mu_max_2 = part_params[9];
	const double n_A_T_1T = part_params[10];
	const double n_omega_T = part_params[11];
	const double omega_T_max = part_params[12];
	const double S0_glu = part_params[13];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = std::pow(y[4], 2*n_omega_T)*n_omega_T*omega_T_max/(y[4]*std::pow(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[4], n_omega_T)*n_omega_T*omega_T_max/(y[4]*(std::pow(y[4], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = 0;
	J( 4 , 2 ) = (1.0/2.0)*y[2]*y[4]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[4]*mu_max_1/(K_mu_glu + y[2]);
	J( 4 , 3 ) = -std::pow(y[3], n_A_T_1T)*std::pow(K_A_T_1T, n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*std::pow(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2));
	J( 4 , 4 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;

}
void Models::model_128(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_mu_glu = part_params[3];
	const double k_omega_T_1T = part_params[4];
	const double kT_max_1T = part_params[5];
	const double mu_max_1 = part_params[6];
	const double mu_max_2 = part_params[7];
	const double n_omega_T = part_params[8];
	const double omega_T_max = part_params[9];
	const double S0_glu = part_params[10];

	//Species order is: N_1 N_2 S_glu T_1T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[3], n_omega_T)*omega_T_max/(std::pow(y[3], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]);
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -1.0/2.0*y[2]*y[3]*mu_max_1/(K_mu_glu + y[2]) + kT_max_1T;

}
void Models::jac_128(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_mu_glu = part_params[3];
	const double k_omega_T_1T = part_params[4];
	const double kT_max_1T = part_params[5];
	const double mu_max_1 = part_params[6];
	const double mu_max_2 = part_params[7];
	const double n_omega_T = part_params[8];
	const double omega_T_max = part_params[9];
	const double S0_glu = part_params[10];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = std::pow(y[3], 2*n_omega_T)*n_omega_T*omega_T_max/(y[3]*std::pow(std::pow(y[3], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[3], n_omega_T)*n_omega_T*omega_T_max/(y[3]*(std::pow(y[3], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 3 , 0 ) = 0;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = (1.0/2.0)*y[2]*y[3]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[3]*mu_max_1/(K_mu_glu + y[2]);
	J( 3 , 3 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;

}
void Models::model_129(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_2T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_omega_T_2T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kA_2 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kT_max_2T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_T_2T = part_params[16];
	const double n_A_V_1T = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_T_max = part_params[19];
	const double S0_glu = part_params[20];

	//Species order is: N_1 N_2 S_glu A_1 A_2 V_1T T_1T T_2T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_2T, n_omega_T));
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = -y[4]*D + y[1]*kA_2;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;
	dydt[7] = std::pow(y[3], n_A_T_2T)*kT_max_2T/(std::pow(y[3], n_A_T_2T) + std::pow(K_A_T_2T, n_A_T_2T)) - 1.0/2.0*y[2]*y[7]*mu_max_2/(K_mu_glu + y[2]);

}
void Models::jac_129(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_2T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_omega_T_2T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kA_2 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kT_max_2T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_T_2T = part_params[16];
	const double n_A_V_1T = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_T_max = part_params[19];
	const double S0_glu = part_params[20];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 0 , 7 ) = 0;
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_2T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_2T, n_omega_T)));
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = kA_2;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 5 , 7 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_2/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_2/(K_mu_glu + y[2]);
	J( 7 , 3 ) = -std::pow(y[3], 2*n_A_T_2T)*kT_max_2T*n_A_T_2T/(y[3]*std::pow(std::pow(y[3], n_A_T_2T) + std::pow(K_A_T_2T, n_A_T_2T), 2)) + std::pow(y[3], n_A_T_2T)*kT_max_2T*n_A_T_2T/(y[3]*(std::pow(y[3], n_A_T_2T) + std::pow(K_A_T_2T, n_A_T_2T)));
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = 0;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_2/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_130(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_2T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_omega_T_2T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kA_2 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kT_max_2T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_T_2T = part_params[16];
	const double n_A_V_1T = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_T_max = part_params[19];
	const double S0_glu = part_params[20];

	//Species order is: N_1 N_2 S_glu A_1 A_2 V_1T T_1T T_2T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_2T, n_omega_T));
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = -y[4]*D + y[1]*kA_2;
	dydt[5] = std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = -1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann + kT_max_1T;
	dydt[7] = std::pow(y[3], n_A_T_2T)*kT_max_2T/(std::pow(y[3], n_A_T_2T) + std::pow(K_A_T_2T, n_A_T_2T)) - 1.0/2.0*y[2]*y[7]*mu_max_2/(K_mu_glu + y[2]);

}
void Models::jac_130(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_2T = part_params[3];
	const double K_A_V_1T = part_params[4];
	const double K_mu_glu = part_params[5];
	const double k_omega_T_1T = part_params[6];
	const double k_omega_T_2T = part_params[7];
	const double k_TV_ann = part_params[8];
	const double kA_1 = part_params[9];
	const double kA_2 = part_params[10];
	const double kT_max_1T = part_params[11];
	const double kT_max_2T = part_params[12];
	const double kV_max_1T = part_params[13];
	const double mu_max_1 = part_params[14];
	const double mu_max_2 = part_params[15];
	const double n_A_T_2T = part_params[16];
	const double n_A_V_1T = part_params[17];
	const double n_omega_T = part_params[18];
	const double omega_T_max = part_params[19];
	const double S0_glu = part_params[20];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 0 , 7 ) = 0;
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_2T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_2T, n_omega_T)));
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = kA_2;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]);
	J( 5 , 3 ) = 0;
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 5 , 7 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = 0;
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_2/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_2/(K_mu_glu + y[2]);
	J( 7 , 3 ) = -std::pow(y[3], 2*n_A_T_2T)*kT_max_2T*n_A_T_2T/(y[3]*std::pow(std::pow(y[3], n_A_T_2T) + std::pow(K_A_T_2T, n_A_T_2T), 2)) + std::pow(y[3], n_A_T_2T)*kT_max_2T*n_A_T_2T/(y[3]*(std::pow(y[3], n_A_T_2T) + std::pow(K_A_T_2T, n_A_T_2T)));
	J( 7 , 4 ) = 0;
	J( 7 , 5 ) = 0;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_2/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
void Models::model_131(const ublas_vec_t  &y , ublas_vec_t &dydt , double t, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_T_2T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_omega_T_2T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kA_2 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kT_max_2T = part_params[13];
	const double kV_max_1T = part_params[14];
	const double mu_max_1 = part_params[15];
	const double mu_max_2 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_T_2T = part_params[18];
	const double n_A_V_1T = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	//Species order is: N_1 N_2 S_glu A_1 A_2 V_1T T_1T T_2T 
	dydt[0] = -D*y[0] + y[0]*y[2]*mu_max_1/(K_mu_glu + y[2]) - std::pow(y[6], n_omega_T)*omega_T_max/(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T));
	dydt[1] = -D*y[1] + y[1]*y[2]*mu_max_2/(K_mu_glu + y[2]) - std::pow(y[7], n_omega_T)*omega_T_max/(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_2T, n_omega_T));
	dydt[2] = D*(S0_glu - y[2]) - y[0]*y[2]*mu_max_1/(g_1*(K_mu_glu + y[2])) - y[1]*y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	dydt[3] = -y[3]*D + y[0]*kA_1;
	dydt[4] = -y[4]*D + y[1]*kA_2;
	dydt[5] = std::pow(y[3], n_A_V_1T)*kV_max_1T/(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) + std::pow(y[4], n_A_V_1T)*kV_max_1T/(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)) - 1.0/2.0*y[2]*y[5]*mu_max_1/(K_mu_glu + y[2]) - 1.0/2.0*y[2]*y[5]*mu_max_2/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[6] = std::pow(y[3], n_A_T_1T)*kT_max_1T/(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)) - 1.0/2.0*y[2]*y[6]*mu_max_1/(K_mu_glu + y[2]) - y[6]*y[5]*k_TV_ann;
	dydt[7] = std::pow(y[4], n_A_T_2T)*kT_max_2T/(std::pow(y[4], n_A_T_2T) + std::pow(K_A_T_2T, n_A_T_2T)) - 1.0/2.0*y[2]*y[7]*mu_max_2/(K_mu_glu + y[2]);

}
void Models::jac_131(const ublas_vec_t & y , ublas_mat_t &J , const double &/* t*/ , ublas_vec_t &dfdt, std::vector <double> &part_params)
{
	//Unpack parameters
	const double D = part_params[0];
	const double g_1 = part_params[1];
	const double g_2 = part_params[2];
	const double K_A_T_1T = part_params[3];
	const double K_A_T_2T = part_params[4];
	const double K_A_V_1T = part_params[5];
	const double K_mu_glu = part_params[6];
	const double k_omega_T_1T = part_params[7];
	const double k_omega_T_2T = part_params[8];
	const double k_TV_ann = part_params[9];
	const double kA_1 = part_params[10];
	const double kA_2 = part_params[11];
	const double kT_max_1T = part_params[12];
	const double kT_max_2T = part_params[13];
	const double kV_max_1T = part_params[14];
	const double mu_max_1 = part_params[15];
	const double mu_max_2 = part_params[16];
	const double n_A_T_1T = part_params[17];
	const double n_A_T_2T = part_params[18];
	const double n_A_V_1T = part_params[19];
	const double n_omega_T = part_params[20];
	const double omega_T_max = part_params[21];
	const double S0_glu = part_params[22];

	J( 0 , 0 ) = -D + y[2]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 1 ) = 0;
	J( 0 , 2 ) = -y[0]*y[2]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + y[0]*mu_max_1/(K_mu_glu + y[2]);
	J( 0 , 3 ) = 0;
	J( 0 , 4 ) = 0;
	J( 0 , 5 ) = 0;
	J( 0 , 6 ) = std::pow(y[6], 2*n_omega_T)*n_omega_T*omega_T_max/(y[6]*std::pow(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T), 2)) - std::pow(y[6], n_omega_T)*n_omega_T*omega_T_max/(y[6]*(std::pow(y[6], n_omega_T) + std::pow(k_omega_T_1T, n_omega_T)));
	J( 0 , 7 ) = 0;
	J( 1 , 0 ) = 0;
	J( 1 , 1 ) = -D + y[2]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 2 ) = -y[1]*y[2]*mu_max_2/std::pow(K_mu_glu + y[2], 2) + y[1]*mu_max_2/(K_mu_glu + y[2]);
	J( 1 , 3 ) = 0;
	J( 1 , 4 ) = 0;
	J( 1 , 5 ) = 0;
	J( 1 , 6 ) = 0;
	J( 1 , 7 ) = std::pow(y[7], 2*n_omega_T)*n_omega_T*omega_T_max/(y[7]*std::pow(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_2T, n_omega_T), 2)) - std::pow(y[7], n_omega_T)*n_omega_T*omega_T_max/(y[7]*(std::pow(y[7], n_omega_T) + std::pow(k_omega_T_2T, n_omega_T)));
	J( 2 , 0 ) = -y[2]*mu_max_1/(g_1*(K_mu_glu + y[2]));
	J( 2 , 1 ) = -y[2]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 2 ) = -D + y[0]*y[2]*mu_max_1/(g_1*std::pow(K_mu_glu + y[2], 2)) - y[0]*mu_max_1/(g_1*(K_mu_glu + y[2])) + y[1]*y[2]*mu_max_2/(g_2*std::pow(K_mu_glu + y[2], 2)) - y[1]*mu_max_2/(g_2*(K_mu_glu + y[2]));
	J( 2 , 3 ) = 0;
	J( 2 , 4 ) = 0;
	J( 2 , 5 ) = 0;
	J( 2 , 6 ) = 0;
	J( 2 , 7 ) = 0;
	J( 3 , 0 ) = kA_1;
	J( 3 , 1 ) = 0;
	J( 3 , 2 ) = 0;
	J( 3 , 3 ) = -D;
	J( 3 , 4 ) = 0;
	J( 3 , 5 ) = 0;
	J( 3 , 6 ) = 0;
	J( 3 , 7 ) = 0;
	J( 4 , 0 ) = 0;
	J( 4 , 1 ) = kA_2;
	J( 4 , 2 ) = 0;
	J( 4 , 3 ) = 0;
	J( 4 , 4 ) = -D;
	J( 4 , 5 ) = 0;
	J( 4 , 6 ) = 0;
	J( 4 , 7 ) = 0;
	J( 5 , 0 ) = 0;
	J( 5 , 1 ) = 0;
	J( 5 , 2 ) = (1.0/2.0)*y[2]*y[5]*mu_max_1/std::pow(K_mu_glu + y[2], 2) + (1.0/2.0)*y[2]*y[5]*mu_max_2/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[5]*mu_max_1/(K_mu_glu + y[2]) - 1.0/2.0*y[5]*mu_max_2/(K_mu_glu + y[2]);
	J( 5 , 3 ) = -std::pow(y[3], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*std::pow(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[3], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[3]*(std::pow(y[3], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 4 ) = -std::pow(y[4], 2*n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*std::pow(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T), 2)) + std::pow(y[4], n_A_V_1T)*kV_max_1T*n_A_V_1T/(y[4]*(std::pow(y[4], n_A_V_1T) + std::pow(K_A_V_1T, n_A_V_1T)));
	J( 5 , 5 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - 1.0/2.0*y[2]*mu_max_2/(K_mu_glu + y[2]) - y[6]*k_TV_ann;
	J( 5 , 6 ) = -y[5]*k_TV_ann;
	J( 5 , 7 ) = 0;
	J( 6 , 0 ) = 0;
	J( 6 , 1 ) = 0;
	J( 6 , 2 ) = (1.0/2.0)*y[2]*y[6]*mu_max_1/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[6]*mu_max_1/(K_mu_glu + y[2]);
	J( 6 , 3 ) = -std::pow(y[3], 2*n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*std::pow(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T), 2)) + std::pow(y[3], n_A_T_1T)*kT_max_1T*n_A_T_1T/(y[3]*(std::pow(y[3], n_A_T_1T) + std::pow(K_A_T_1T, n_A_T_1T)));
	J( 6 , 4 ) = 0;
	J( 6 , 5 ) = -y[6]*k_TV_ann;
	J( 6 , 6 ) = -1.0/2.0*y[2]*mu_max_1/(K_mu_glu + y[2]) - y[5]*k_TV_ann;
	J( 6 , 7 ) = 0;
	J( 7 , 0 ) = 0;
	J( 7 , 1 ) = 0;
	J( 7 , 2 ) = (1.0/2.0)*y[2]*y[7]*mu_max_2/std::pow(K_mu_glu + y[2], 2) - 1.0/2.0*y[7]*mu_max_2/(K_mu_glu + y[2]);
	J( 7 , 3 ) = 0;
	J( 7 , 4 ) = -std::pow(y[4], 2*n_A_T_2T)*kT_max_2T*n_A_T_2T/(y[4]*std::pow(std::pow(y[4], n_A_T_2T) + std::pow(K_A_T_2T, n_A_T_2T), 2)) + std::pow(y[4], n_A_T_2T)*kT_max_2T*n_A_T_2T/(y[4]*(std::pow(y[4], n_A_T_2T) + std::pow(K_A_T_2T, n_A_T_2T)));
	J( 7 , 5 ) = 0;
	J( 7 , 6 ) = 0;
	J( 7 , 7 ) = -1.0/2.0*y[2]*mu_max_2/(K_mu_glu + y[2]);

	dfdt[0] = 0.0;
	dfdt[1] = 0.0;
	dfdt[2] = 0.0;
	dfdt[3] = 0.0;
	dfdt[4] = 0.0;
	dfdt[5] = 0.0;
	dfdt[6] = 0.0;
	dfdt[7] = 0.0;

}
