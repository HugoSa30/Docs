/*
 * Program: n42.bin
 * Function: FUN_000e49d0
 * Entry: 000e49d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e49d0(void)

{
  char cVar1;
  int iVar2;
  
  if (B_stend == '\0') {
    if (B_gdst == 0) {
      iVar2 = (int)DAT_003fb882;
      cVar1 = FUN_000a8eec(FZWSTNM,&DAT_001cdef7,0x1cdefd,nmot);
      iVar2 = cVar1 + iVar2;
      if (iVar2 < -0x80) {
        iVar2 = -0x80;
      }
      else if (0x7f < iVar2) {
        iVar2 = 0x7f;
      }
      zwstt = (byte)iVar2;
    }
    else {
      iVar2 = (int)DAT_003fb882;
      cVar1 = FUN_000a8eec(FZWSTNMT,&DAT_001cdf04,&DAT_001cdf0a,nmot);
      iVar2 = cVar1 + iVar2;
      if (iVar2 < -0x80) {
        iVar2 = -0x80;
      }
      else if (0x7f < iVar2) {
        iVar2 = 0x7f;
      }
      zwstt = (byte)iVar2;
    }
  }
  return;
}

