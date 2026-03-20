/*
 * Program: n42.bin
 * Function: FUN_00092714
 * Entry: 00092714
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092714(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  int in_TBLr;
  int iVar5;
  
  FUN_00096a10(2);
  FUN_00096a20(0);
  FUN_000926cc();
  FUN_000925e8(&LAB_001c00dc);
  FUN_0009211c();
  FUN_000911d4();
  FUN_000955a8();
  FUN_00095f40();
  FUN_00090e78();
  FUN_00093e24(&DAT_001c0310);
  FUN_00092958();
  FUN_0009535c(20000000);
  puVar1 = &DAT_001c7ff0;
  iVar5 = in_TBLr;
  do {
    FUN_00097358();
    FUN_000923e8();
    uVar4 = iVar5 - in_TBLr;
    puVar2 = puVar1;
    if (0x9c3 < uVar4) {
      if (uVar4 < 10000) {
        in_TBLr = in_TBLr + 0x9c4;
      }
      else {
        in_TBLr = in_TBLr + (uVar4 / 0x9c4) * 0x9c4;
      }
      FUN_00091208();
      (*_DAT_003f9f8c)();
      FUN_00097504();
      (*_DAT_003f9f8c)();
      FUN_00095888();
      (*_DAT_003f9f8c)();
      FUN_00093e2c();
      (*_DAT_003f9f8c)();
      FUN_00095e00();
      (*_DAT_003f9f8c)();
      FUN_000960ac();
      (*_DAT_003f9f8c)();
      cVar3 = FUN_000954bc();
      if (cVar3 == '\0') {
        _DAT_003f9e74 = in_TBLr;
        FUN_000911c0(0x3d38,&DAT_003fa080);
        puVar2 = &UNK_003f6348 + (int)puVar1;
        FUN_00096a10(3);
        FUN_00093e24(&UNK_003ee380 + (int)puVar1);
        func_0x0048a080();
        FUN_00096a10(2);
        FUN_00093e24(&UNK_003ee668 + (int)puVar1);
        FUN_000911c0(&DAT_003fa080,0x3d38);
        in_TBLr = _DAT_003f9e74;
      }
    }
    (*_DAT_003f9f8c)();
    FUN_00092990();
    (*_DAT_003f9f8c)();
    puVar1 = puVar2;
  } while( true );
}

