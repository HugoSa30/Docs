/*
 * Program: n42.bin
 * Function: FUN_000abec0
 * Entry: 000abec0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abec0(void)

{
  if ((BGDVEintbits & 1) == 0) {
    B_umauab = 1;
  }
  else if (B_nlpnew != '\0') {
    _udkp1asr_w = _UDKP1AURI;
    _udkp2asr_w = _UDKP2AURI;
    BGDVEintbits = BGDVEintbits & 0xfd;
    dkpstg_w = _DKPSTGMIN;
  }
  udkp1as_w = _udkp1asr_w;
  _udkp2as_w = _udkp2asr_w;
  B_dkaden = 0;
  wdkada_w = 0;
  B_dlrien = 0;
  B_dveada = 0;
  B_lrnrdy = 1;
  B_lrnakt = 0;
  return;
}

