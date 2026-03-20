/*
 * Program: n42.bin
 * Function: FUN_00182dac
 * Entry: 00182dac
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00182dac(void)

{
  char cVar1;
  int iVar2;
  
  if (B_stend == '\0') {
    if (B_gdst == 0) {
      DAT_003fb883 = func_0xff218eec(FZWSTTM,&DAT_001d327e,&DAT_001d3284,tmst);
      iVar2 = (int)DAT_003fb883;
      cVar1 = func_0xff218eec(DZWSTTA,&DAT_001d3264,0x1d326a,tans);
      iVar2 = cVar1 + iVar2;
      if (iVar2 < -0x80) {
        iVar2 = -0x80;
      }
      else if (0x7f < iVar2) {
        iVar2 = 0x7f;
      }
      DAT_003fb882 = (undefined)iVar2;
    }
    else {
      DAT_003fb883 = func_0xff218eec(FZWSTTMT,&DAT_001d328b,0x1d3291,tmst);
      iVar2 = (int)DAT_003fb883;
      cVar1 = func_0xff218eec(DZWSTTAT,&DAT_001d3271,0x1d3277,tans);
      iVar2 = cVar1 + iVar2;
      if (iVar2 < -0x80) {
        iVar2 = -0x80;
      }
      else if (0x7f < iVar2) {
        iVar2 = 0x7f;
      }
      DAT_003fb882 = (undefined)iVar2;
    }
  }
  return;
}

