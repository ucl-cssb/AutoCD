	dN_1 = ( - D * N_1 ) + N_1  * ( mu_max_1 * S_glu / ( K_mu_glu + S_glu ) ) - (  omega_T_max * T_1T**n_omega_T  / ( k_omega_T_1T**n_omega_T + T_1T**n_omega_T )  ) 

	dN_2 = ( - D * N_2 ) + N_2  * ( mu_max_2 * S_glu / ( K_mu_glu + S_glu ) ) - (  omega_T_max * T_2T**n_omega_T  / ( k_omega_T_2T**n_omega_T + T_2T**n_omega_T )  ) 

	dS_glu = ( D * ( S0_glu - S_glu ) ) - ( mu_max_1 * S_glu / ( K_mu_glu + S_glu ) ) * N_1 / g_1  - ( mu_max_2 * S_glu / ( K_mu_glu + S_glu ) ) * N_2 / g_2 

	dA_1 = ( - D * A_1 ) + kA_1 * N_1

	dA_2 = ( - D * A_2 ) + kA_2 * N_2

	dV_1T =   +  kV_max_1T  * ( A_2**n_A_V_1T / ( K_A_V_1T**n_A_V_1T  + A_2**n_A_V_1T) ) - ( V_1T  * ( ( mu_max_1 * S_glu / ( K_mu_glu + S_glu ) ) / 2 ) ) - ( k_TV_ann * T_1T * V_1T )

	dT_1T =   +  kT_max_1T  - ( T_1T  * ( ( mu_max_1 * S_glu / ( K_mu_glu + S_glu ) ) / 2 ) ) - ( k_TV_ann * T_1T * V_1T )

	dT_2T =   +  kT_max_2T  * ( A_1**n_A_T_2T / ( K_A_T_2T**n_A_T_2T  + A_1**n_A_T_2T) ) - ( T_2T  * ( ( mu_max_2 * S_glu / ( K_mu_glu + S_glu ) ) / 2 ) )

