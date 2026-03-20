/*
 * Program: n42.bin
 * Function: FE_UM
 * Entry: 0018f0b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FE_UM(void)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  if (pvdkds_w == 0) {
    iVar4 = 0xffff;
  }
  else {
    iVar4 = (int)(((uint)pvdkds_w - (int)(short)dps_w) * 0x8000) / (int)(uint)pvdkds_w;
    if (iVar4 < 0) {
      dpsmanuw_w = 0;
      goto LAB_0018f148;
    }
    if (0xffff < iVar4) {
      dpsmanuw_w = 0xffff;
      goto LAB_0018f148;
    }
  }
  dpsmanuw_w = (word)iVar4;
LAB_0018f148:
  dpipoluw_w = func_0xff2189bc(&KLDPIPOL,dpsmanuw_w);
  msdkuw_w = func_0xff21a9c0(_KFDKMS,&DAT_001cf598,_KFDKMS_axis_x,0x1cf5c2,&KFDKMS_start,
                             (int)_wdkba_w,dpipoluw_w);
  uVar1 = msdkuw_w * 4;
  sVar2 = func_0xff2189bc(&KLDKVVTO,msdkuw_w);
  uVar3 = func_0xff2189bc(&KLDKVVTU,msdkuw_w);
  if (uVar3 < uVar1) {
    uVar3 = uVar1 - uVar3;
  }
  else {
    uVar3 = 0;
  }
  B_dkvvto = (ushort)(sVar2 + uVar1) < mlsolkori;
  B_dkvvtu = mlsolkori < uVar3;
  return;
}

