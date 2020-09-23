	dN_1 = ( - D * N_1 ) + N_1  * ( mu_max_1 * S_glu / ( K_mu_glu + S_glu ) ) - (  omega_T_max * T_1T**n_omega_T  / ( k_omega_T_1T**n_omega_T + T_1T**n_omega_T )  ) 

	dN_2 = ( - D * N_2 ) + N_2  * ( mu_max_2 * S_glu / ( K_mu_glu + S_glu ) )

	dS_glu = ( D * ( S0_glu - S_glu ) ) - ( mu_max_1 * S_glu / ( K_mu_glu + S_glu ) ) * N_1 / g_1  - ( mu_max_2 * S_glu / ( K_mu_glu + S_glu ) ) * N_2 / g_2 

	dT_1T =   +  kT_max_1T  - ( T_1T  * ( ( mu_max_1 * S_glu / ( K_mu_glu + S_glu ) ) / 2 ) )

