/*
 * Program: n42.bin
 * Function: FUN_00129d20
 * Entry: 00129d20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00129d20(void)

{
  uint uVar1;
  ushort local_30;
  ushort local_2c;
  ushort local_28;
  ushort local_24 [2];
  ushort local_20 [2];
  ushort *local_1c;
  ushort local_18 [2];
  ushort *local_14;
  ushort local_10 [2];
  ushort *local_c;
  
  if (_reset_indication_um != 0) {
    uVar1 = _reset_indication_um - 300;
    if (uVar1 < 0xd) {
                    /* WARNING: Could not emulate address calculation at 0x00129dc4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar1 * 4 + 0xf29dd0))();
      return;
    }
    _DAT_003f98f6 = _reset_indication_um;
    _reset_indication_um = 0;
  }
  local_30 = _DAT_003fdfdc & 0xd0fc | 0x2002;
  local_2c = _DAT_003fdfda & 0xd0fc | 0x2002;
  local_28 = _DAT_003fdfd8 & 0xd0fc | 0x2002;
  local_24[0] = local_30;
  local_20[0] = local_30;
  local_1c = local_24;
  func_0xff222958(0xbd,local_20);
  local_24[0] = local_2c;
  local_18[0] = local_2c;
  local_14 = local_24;
  func_0xff222958(0xbc,local_18);
  local_24[0] = local_28;
  local_10[0] = local_28;
  local_c = local_24;
  func_0xff222958(0xbb,local_10);
  return;
}

