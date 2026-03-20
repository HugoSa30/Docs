/*
 * Program: n42.bin
 * Function: FUN_00169c70
 * Entry: 00169c70
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00169c70(void)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined2 local_28;
  
  ftw = func_0xff2196d0(&KFFWTBR,rl,nmot);
  ftvdk = func_0xff2187cc(&DAT_001cf924,tans);
  uVar4 = (ushort)tans;
  sVar2 = uVar4 - 0x40;
  _DAT_003fabec =
       func_0xff217f84(_DAT_001cf9e2,(int)(short)(tmot - 0x40),(int)_DAT_003fabec,
                       _DAT_003fabec & 0xffff);
  tmotfil = (char)(_DAT_003fabec >> 0x10) + '@';
  local_28 = (undefined2)((uint)(&DAT_0000b600 + sVar2 * 0x80) >> 0x10);
  DAT_005b87c4 = sVar2;
  uVar1 = func_0xff217b40(local_28,(uint)(&DAT_0000b600 + sVar2 * 0x80) & 0xffff,0x16c);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  DAT_005b90a9 = (undefined)uVar1;
  uVar5 = (uint)(ushort)(uVar4 + 300);
  if ((uVar5 == 0) || (uVar5 = 0xb600 / uVar5, 0xffff < uVar5)) {
    uVar5 = 0xffff;
  }
  ftu = (byte)uVar5;
  _DAT_003fabf0 =
       func_0xff217f84(DAT_001cf9bc,
                       (int)(short)((short)((int)(short)(_DAT_003fabec - sVar2) * (uint)ftw >> 8) +
                                   sVar2),(int)_DAT_003fabf0,_DAT_003fabf0 & 0xffff);
  uVar1 = func_0xff2187cc(&DAT_001cf908,tmotfil);
  iVar6 = (int)_DAT_003fabf0 + (int)(short)((uVar1 & 0xff) - 0x40);
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  sVar2 = func_0xff218abc(&DAT_001cf9be,(int)DAT_005b87c4);
  iVar6 = (int)(short)iVar6 + (int)sVar2;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  sVar2 = (short)(iVar6 + 0x40);
  if (sVar2 < 0x100) {
    if (sVar2 < 0) {
      DAT_005b87bc = 0;
    }
    else {
      DAT_005b87bc = (byte)(iVar6 + 0x40);
    }
  }
  else {
    DAT_005b87bc = 0xff;
  }
  uVar3 = func_0xff217b40(0xb6,0,DAT_005b87bc + 300);
  if ((DAT_001cf904 & 1) == 0) {
    DAT_005b87c0 = tans;
    uVar5 = func_0xff2187cc(&DAT_001cf938,tans);
    uVar1 = func_0xff2217f4(uVar3,(uVar5 & 0xff) << 8);
  }
  else {
    DAT_005b87c0 = DAT_005b87bc;
    uVar5 = func_0xff2187cc(&DAT_001cf938,DAT_005b87bc);
    uVar1 = func_0xff2217f4(uVar3,(uVar5 & 0xff) << 8);
  }
  if (uVar1 < 0x8000) {
    DAT_005b87c2 = uVar1 * 2;
  }
  else {
    DAT_005b87c2 = -1;
  }
  DAT_005b87bd = (char)((ushort)DAT_005b87c2 >> 8);
  return;
}

