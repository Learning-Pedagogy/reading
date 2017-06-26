
primesvrps.dll: dlldata.obj primesvr_p.obj primesvr_i.obj
	link /dll /out:primesvrps.dll /def:primesvrps.def /entry:DllMain dlldata.obj primesvr_p.obj primesvr_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del primesvrps.dll
	@del primesvrps.lib
	@del primesvrps.exp
	@del dlldata.obj
	@del primesvr_p.obj
	@del primesvr_i.obj
