/*
 * Program: n42.bin
 * Function: FUN_00104214
 * Entry: 00104214
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0010428c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104214(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  DAT_003fff84 = 0;
  FUN_0010c780();
  puVar3 = (undefined4 *)&UNK_005b7ffc;
  puVar2 = (undefined4 *)0xf0febc;
  iVar4 = 0x11;
  do {
    puVar3[1] = puVar2[1];
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    *puVar3 = *puVar2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  cVar1 = FUN_00103d40();
  if ((((cVar1 == '\0') || (cVar1 = FUN_00103e70(), cVar1 == '\0')) ||
      (cVar1 = FUN_00103c38(), cVar1 == '\0')) ||
     (((cVar1 = FUN_00103c90(), cVar1 == '\0' || (cVar1 = FUN_00103ce8(), cVar1 == '\0')) ||
      (cVar1 = FUN_00103f38(), cVar1 != '\x01')))) {
    FUN_001038cc();
    nmot_w = 0;
    DAT_003f9ac8 = 0;
    _DAT_003ffff0 = 2;
    _0();
    FUN_00101498();
  }
  else {
    _DAT_003ffff0 = 8;
    func_0xff208008();
  }
  return;
}

