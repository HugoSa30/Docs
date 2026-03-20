/*
 * Program: n42.bin
 * Function: FUN_000e4ac0
 * Entry: 000e4ac0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000e4ac0(void)

{
  char cVar3;
  uint uVar1;
  uint uVar2;
  short sVar5;
  int iVar4;
  int iVar6;
  
  if (B_vvtnotl == 0) {
    if (B_ll == '\0') {
      cVar3 = calc_ign_angle_partial_load
                        (KFDZWLKH,&DAT_001d3299,KFDZWLKH_axis_x,&KFDZWLKH_axis_y,0x1d32a9,nmot,rl);
    }
    else {
      cVar3 = calc_ign_angle_partial_load
                        (KFDZWLKHLL,&DAT_001d32eb,KFDZWLKHLL_axis_x,0x1d32f3,0x1d32fb,nmot,rl);
    }
    sVar5 = (short)((int)cVar3 * (uint)fwltmkh >> 8);
    if (sVar5 < 0x80) {
      if (sVar5 < -0x80) {
        dzwwlkh = 0x80;
      }
      else {
        dzwwlkh = (byte)((int)cVar3 * (uint)fwltmkh >> 8);
      }
    }
    else {
      dzwwlkh = 0x7f;
    }
  }
  else {
    dzwwlkh = 0;
  }
  uVar1 = calc_value_from_x_y_2(&KFWZWWL,nmot,rl);
  iVar4 = (int)DAT_003fb884;
  uVar2 = calc_value_from_x_y_2(&KFWZWWLVT,nmot,rl);
  iVar6 = (int)(short)((int)DAT_003fb885 * (uVar2 & 0xff) >> 8);
  iVar6 = ((int)(((short)((short)(iVar4 * (uVar1 & 0xff) >> 8) + (short)(char)dzwwlkh) - iVar6) *
                (uint)dpsfak) >> 8) + iVar6;
  if (iVar6 < 0x80) {
    if (iVar6 < -0x80) {
      dzwwl = 0x80;
    }
    else {
      dzwwl = (byte)iVar6;
    }
  }
  else {
    dzwwl = 0x7f;
  }
  return;
}

