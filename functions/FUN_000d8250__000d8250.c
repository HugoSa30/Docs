/*
 * Program: n42.bin
 * Function: FUN_000d8250
 * Entry: 000d8250
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d8250(void)

{
  bool bVar1;
  bool bVar2;
  
  if ((B_i_ska_um == '\0') || (nmot <= NMXSKA)) {
    B_skaevab = 0;
    bVar1 = false;
  }
  else {
    B_skaevab = 1;
    bVar1 = true;
  }
  if (((B_dkpu == '\0') || (nmot <= NMXSKA)) && ((B_nmaxd == '\0' || (B_dknolu == '\0')))) {
    B_dkuevab = 0;
    bVar2 = false;
  }
  else {
    B_dkuevab = 1;
    bVar2 = true;
  }
  if ((bVar1) || (bVar2)) {
    B_evabu = 1;
  }
  else {
    B_evabu = 0;
  }
  return;
}

