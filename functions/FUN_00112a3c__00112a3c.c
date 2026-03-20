/*
 * Program: n42.bin
 * Function: FUN_00112a3c
 * Entry: 00112a3c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00112a3c(void)

{
  rl_ur = 0xff;
  _rlst08_ur = 0xffffffff;
  ipsn_ur = 0xff;
  _ipnst08_ur = 0xffffffff;
  dps_ur = 0xff;
  evhubi_ur = 0xff;
  evhubim_ur = 0xff;
  _hubst08_ur = 0xffffffff;
  rlc_c_ur = 0xff;
  ipa_c_ur = 0xff;
  dps_c_ur = 0xff;
  vvt_c_ur = 0xff;
  rlip_c_ur = 0xff;
  dpipf_ur = 0xff;
  DAT_003f9980 = 0;
  dpipf_l_ur = 0xff;
  dpipf_p_ur = 0xff;
  _DAT_003f98ac = 0;
  if (DAT_001ce3b5 != 0) {
    do {
      (&UNK_003f9978)[DAT_003f98ad] = 0xff;
      _DAT_003f98ac = _DAT_003f98ac + 1;
    } while (DAT_003f98ad < DAT_001ce3b5);
  }
  rldpf_ur = 0xff;
  rldpf_l_ur = 0xff;
  rldpf_p_ur = 0xff;
  _DAT_003f98ac = 0;
  if (DAT_001ce6ab != 0) {
    do {
      (&UNK_003f9998)[DAT_003f98ad] = 0xff;
      _DAT_003f98ac = _DAT_003f98ac + 1;
    } while (DAT_003f98ad < DAT_001ce6ab);
  }
  rldf_ur = 0xff;
  rldf_l_ur = 0xff;
  rldf_p_ur = 0xff;
  _DAT_003f98ac = 0;
  if (DAT_001ce6ac != 0) {
    do {
      (&UNK_003f998c)[DAT_003f98ad] = 0xff;
      _DAT_003f98ac = _DAT_003f98ac + 1;
    } while (DAT_003f98ad < DAT_001ce6ac);
  }
  return;
}

