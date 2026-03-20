/*
 * Program: n42.bin
 * Function: FUN_0009583c
 * Entry: 0009583c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0009583c(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = '\0';
  pcVar2 = _DAT_003f9f64;
  while (pcVar2 = pcVar2 + 1, pcVar2 < _DAT_003f9f64 + (*(ushort *)(param_1 + 4) - 1)) {
    cVar1 = cVar1 + *pcVar2;
  }
  return _DAT_003f9f64[*(ushort *)(param_1 + 4) - 1] == cVar1;
}

