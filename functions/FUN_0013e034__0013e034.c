/*
 * Program: n42.bin
 * Function: FUN_0013e034
 * Entry: 0013e034
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013e034(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((DAT_003fdfb7 & 1) == 0) {
    if (((IMTUMTA <= imlatm) && (NTUMTA <= nmot)) && (VTUMTA <= vfzg)) {
      iVar1 = (uint)tans - (int)DTUMTA;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      tumta = (byte)iVar1;
    }
  }
  else {
    tumta = TUMTAI;
  }
  tum_ein = tumta;
  if (((B_tfu != '\0') && (B_etum == '\0')) && (B_ins3cok != '\0')) {
    tum_ein = tumg;
  }
  uVar2 = (uint)tmst - (uint)tum_ein;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  if ((uVar2 & 0xff) == 0) {
    uVar2 = 1;
  }
  uVar3 = (uint)tmotab - (uint)tum_ein;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  xqtm_w = func_0xff217b40(uVar3 & 0xff,0,(uVar2 & 0xff) << 4);
  DAT_005bb81c = func_0xff2189bc(&DAT_001d00b2,xqtm_w);
  B_pltab = (char)(((uint)(byte)((DAT_005bb81c < 0xb147) << 3) << 8) >> 0xb);
  return;
}

