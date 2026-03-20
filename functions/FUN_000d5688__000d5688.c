/*
 * Program: n42.bin
 * Function: FUN_000d5688
 * Entry: 000d5688
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d5688(void)

{
  bool bVar1;
  bool bVar2;
  
  if ((B_dkpaw == '\0') && (B_dkp2e == B_dkp1e)) {
    DAT_003fbf07 = 0;
  }
  else {
    DAT_003fbf07 = 1;
  }
  if ((B_dkp1e == '\0') || (B_dkp2e == '\0')) {
    B_dkunb = 0;
    bVar1 = false;
  }
  else {
    B_dkunb = 1;
    bVar1 = true;
  }
  if ((B_umauab != '\0') || (bVar1)) {
    B_i_ska_fr = 1;
    B_dkpiu = 1;
    bVar1 = true;
  }
  else {
    B_i_ska_fr = 0;
    B_dkpiu = 0;
    bVar1 = false;
  }
  if (((B_nlpne == '\0') && (B_dlrbe == '\0')) && (B_ubdve != '\0')) {
    B_dkpru = 0;
    bVar2 = false;
  }
  else {
    B_dkpru = 1;
    bVar2 = true;
  }
  if (((B_i_ska_um != '\0') || (bVar1)) || (bVar2)) {
    B_dkpu = 1;
  }
  else {
    B_dkpu = 0;
  }
  if (((B_fprzab == '\0') && (B_fproab == '\0')) &&
     ((B_appnolu == '\0' && ((B_wdksive == '\0' && (B_dlrpide == '\0')))))) {
    B_dknolu = 0;
    B_notlu_fr = 0;
  }
  else {
    B_dknolu = 1;
    B_notlu_fr = 1;
  }
  return;
}

