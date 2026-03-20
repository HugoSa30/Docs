/*
 * Program: n42.bin
 * Function: FUN_00191000
 * Entry: 00191000
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00191000(void)

{
  char cVar5;
  uint uVar1;
  uint uVar2;
  undefined2 uVar4;
  undefined4 uVar3;
  int iVar6;
  
  cVar5 = func_0xff218eec(RLVMXN,&DAT_001c99ec,0x1c99f2,tans);
  iVar6 = (uint)nmot + (int)cVar5;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (0xff < iVar6) {
    iVar6 = 0xff;
  }
  snmta = (byte)iVar6;
  if (B_su == '\0') {
    uVar1 = func_0xff2187cc(&FRLVTM,tmot);
    uVar2 = func_0xff2187cc(&RLVMXN,snmta);
    uVar1 = (uVar2 & 0xff) * (uVar1 & 0xff);
    if (0xfffe < uVar1) {
      uVar1 = 0xffff;
    }
    rlvugd = (byte)(uVar1 >> 7);
    if (0xff < uVar1 >> 7) {
      rlvugd = 0xff;
    }
  }
  else {
    uVar1 = func_0xff2187cc(&FRLVTM,tmot);
    uVar2 = func_0xff2187cc(&RLVSMXN,snmta);
    uVar1 = (uVar2 & 0xff) * (uVar1 & 0xff);
    if (0xfffe < uVar1) {
      uVar1 = 0xffff;
    }
    rlvugd = (byte)(uVar1 >> 7);
    if (0xff < uVar1 >> 7) {
      rlvugd = 0xff;
    }
  }
  uVar4 = func_0xff221800((uint)rlvugd << 7,fho_w);
  rlugdob_w = func_0xff2217f4(ftvdk,uVar4);
  rlugd_w = rlumax_w;
  if (rlugdob_w < rlumax_w) {
    rlugd_w = rlugdob_w;
  }
  uVar3 = func_0xff21b248(&KFFMKNULFS,rlugd_w);
  mimxl1_w = func_0xff21afb0(&KFMIOP,_KFFMKNULFS,esst_snm16opuw,uVar3);
  uVar1 = func_0xff221800(mimxl1_w,mrfamx_w);
  uVar1 = (uint)FMIVL * (uVar1 & 0xffff) >> 7;
  if (uVar1 < 0x10000) {
    mimax_w = (word)uVar1;
  }
  else {
    mimax_w = 0xffff;
  }
  return;
}

