SQLite format 3   @     '   E                                                            ' .4    ˚    ˚®K
é	ã€Që˘RJ                                                                                                                                                                                                                                                                                                                                                                                                                                                                       Å$W-ÅQindexSymbolDefinition_DefiningFileId_IndexSymbolDefinitionCREATE INDEX [SymbolDefinition_DefiningFileId_Index]
    ON [SymbolDefinition] ([DefiningFileId])ÅC-ÅGindexSymbolDefinition_Name_IndexSymbolDefinitionCREATE INDEX [SymbolDefinition_Name_Index]
    ON [SymbolDefinition] ([Name] COLLATE NOCASE)Ö=--ä-tableSymbolDefinitionSymbolDefinitionCREATE TABLE [SymbolDefinition]
(
    [SymbolDefinitionId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    [ProviderId] INTEGER NOT NULL
        REFERENCES [ProviderEntity]([ProviderId])
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [Name] NVARCHAR(255) NOT NULL COLLATE NOCASE,
    [FullyQualifiedName] NVARCHAR(255) COLLATE NOCASE,
    [Kind] INTEGER NOT NULL,
    [Accessibility] INTEGER NOT NULL,
    [DefiningFileId] INTEGER NOT NULL
        REFERENCES [FileSystemEntity]([FileSystemEntityId]) 
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [LocationRow] INTEGER NOT NULL,
    [LocationColumn] INTEGER NOT NULL
)Å/_-Å_indexFileScannerCache_FileSystemEntityId_IndexFileScannerCacheCREATE INDEX [FileScannerCache_FileSystemEntityId_Index]
    ON [FileScannerCache]([FileSystemEntityId])ÉU
--Ü]tableFileScannerCacheFileScannerCacheCREATE TABLE [FileScannerCache]
(
    [FileScannerCacheId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, 
    [FileSystemEntityId] INTEGER NOT NULL REFERENCES [FileSystemEntity]([FileSystemEntityId])
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [ProviderId] INTEGER NOT NULL REFERENCES [ProviderEntity]([ProviderId])
        ON DELETE CASCADE,
    [Type] INTEGER NOT NULL,
    [Timestamp] DATETIME NULL
)Å-	/)ÇindexProviderType_TypeProviderEntity
CREATE UNIQUE INDEX [ProviderType_Type]
    ON [ProviderEntity] ([ProviderType] COLLATE NOCASE,[ProviderVersion] COLLATE NOCASE)Ç ))É;tableProviderEntityProviderEntity	CREATE TABLE [ProviderEntity]
(
    [ProviderId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    [ProviderType] NVARCHAR(20) NOT NULL COLLATE NOCASE,
    [ProviderVersion] NVARCHAR(20) NOT NULL COLLATE NOCASE
)Å:E-ÇindexFileSystemEntity_Parent_NameFileSystemEntityCREATE UNIQUE INDEX [FileSystemEntity_Parent_Name]
    ON [FileSystemEntity] ([Name] COLLATE NOCASE, [ParentFileSystemEntityId])ÅBk-ÅyindexFileSystemEntity_ParentFileSystemEntityId_IndexFileSystemEntityCREATE INDEX [FileSystemEntity_ParentFileSystemEntityId_Index]
    ON [FileSystemEntity] ([ParentFileSystemEntityId])ÅC-ÅGindexFileSystemEntity_Name_IndexFileSystemEntityCREATE INDEX [FileSystemEntity_Name_Index]
    ON [FileSystemEntity] ([Name] COLLATE NOCASE)ÉH--ÜCtableFileSystemEntityFileSystemEntityCREATE TABLE [FileSystemEntity]
(
    [FileSystemEntityId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    [Name] NVARCHAR(255) NOT NULL COLLATE NOCASE,
    [ParentFileSystemEntityId] INTEGER NULL
        REFERENCES [FileSystemEntity]([FileSystemEntityId])
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [IsFile] BIT NOT NULL,
    [LastObserved] DATETIME NOT NULL DEFAULT current_timestamp
)o1ÅindexSetting_Name_IndexSettingCREATE INDEX [Setting_Name_Index]
  ON [Setting] ([Name] COLLATE NOCASE)P++Ytablesqlite_sequencesqlite_sequenceCREATE TABLE sqlite_sequence(name,seq)ÅGÇetableSettingSettingCREATE TABLE [Setting]
(
    [SettingId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    [Name] NVARCHAR(255) NOT NULL COLLATE NOCASE,
    [Value] NVARCHAR(255) NU   
   À Ëøß^;À                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       Çm CÖ'ProjectConfigurationService{
  "ProjectBuildConfigurations": [
    {
      "project": "AuthSystem.sln",
      "projectTarget": null,
      "name": "Debug|Any CPU"
    },
    {
      "project": "AuthSystem.csproj",
      "projectTarget": null,
      "name": "Debug|AnyCPU"
    }
  ],
  "StartupProjectFiles": [],
  "CurrentStartupProject": null
}! CDebugTargetsUserSettingsKey[]ÑF ;àaLastIndexSymbolScanners00000000-0000-0000-0000-000000000000-0ebd9de4-22ce-4281-a5d6-cb078794e4ce-2b449df6-6b1d-11d9-94ec-000d93589af6-3eec062c-1463-4780-a3cd-e651e09576e3-4b32c687-281c-4c6d-a2a1-3d874bfa2d4d-7b3bd5d3-8362-427d-89a4-742f2e2256c2-805375ec-d614-41f5-8993-5843fe63ea82-ae211dc5-ce20-41da-91a0-3d44a7652c6f-c62867cc-67a8-49c6-a9d0-2bef369d8bf7-d5d48e50-c894-4c5e-8666-761e2d7b301e-d9212c5d-975a-49e6-a753-2f586bfbf077-dfc75919-8da2-4b4c-bd45-165d2bcf6f61-ef98eb90-bf9b-11e4-bb52-0800200c9a66-f23db5b2-7d08-11d9-a709-000d93b6e43c-f7de61e2-bdde-4e2a-a139-8221b179584e /IndexProcessCount1' -3CreatedOrUpdated02/02/2021 22:17:41 'SchemaVersion1.3.5∞ [ Û‹r¬úÜ[                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     -SymbolDefinition “)ProviderEntity-FileScannerCache2)FileSystemData
   FileSystemRef3FileSystemReference~-FileSystemEntity1Setting
   h ⁄àƒ®hÔ                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    CProjectConfigurationServiceCDebugTargetsUserSettingsKey;LastIndexSymbolScanners/IndexProcessCount-CreatedOrUpdated'	SchemaVersion   È    E˚ıÔÈÁœ∏ûàu[A(ˆ· ¥ñiH#Â∆îfA˝µ¢èXE2
Ó
€
£
q
4
		ÿ	¢	u	6˝ÀéR‹òN”¢q=’°k'Ù¨i+ÿèK	Â¿≠óÑk:Õõl= Õ             <\ g	System.Configuration.ConfigurationManager.dllÿ«ø˙õd0[ O	System.Composition.TypedParts.dllÿ«ø˙õd-Z I	System.Composition.Runtime.dllÿ«ø˙õd-Y I	System.Composition.Hosting.dllÿ«ø˙õd0X O	System.Composition.Convention.dllÿ«ø˙õd5W Y	System.Composition.AttributedModel.dllÿ«ø˙õd4V W	System.ComponentModel.Annotations.dllÿ«ø˙õd/U M	System.Collections.Immutable.dllÿ«ø˙õdT runtimesÿ«ø˚Z<S ruÿ«ø˚Z<R pt-BRÿ«ø˚Z<Q plÿ«ø˚Z<#P 5	NuGet.Frameworks.dllÿ«ø˙õd"O 3	Newtonsoft.Json.dllÿ«ø˙õd@N o	Microsoft.VisualStudio.Web.CodeGenerators.Mvc.dllÿ«ø˙õdBM s	Microsoft.VisualStudio.Web.CodeGeneration.Utils.dllÿ«ø˙õdGL }	Microsoft.VisualStudio.Web.CodeGeneration.Templating.dllÿ«ø˙õdQK Å	Microsoft.VisualStudio.Web.CodeGeneration.EntityFrameworkCore.dllÿ«ø˙õd<J g	Microsoft.VisualStudio.Web.CodeGeneration.dllÿ«ø˙õdAI q	Microsoft.VisualStudio.Web.CodeGeneration.Core.dllÿ«ø˙õdFH {	Microsoft.VisualStudio.Web.CodeGeneration.Contracts.dllÿ«ø˙õd1G Q	Microsoft.IdentityModel.Tokens.dllÿ«ø˙õdBF s	Microsoft.IdentityModel.Protocols.OpenIdConnect.dllÿ«ø˙õd4E W	Microsoft.IdentityModel.Protocols.dllÿ«ø˙õd2D S	Microsoft.IdentityModel.Logging.dllÿ«ø˙õd8C _	Microsoft.IdentityModel.JsonWebTokens.dllÿ«ø˙õd,B G	Microsoft.Identity.Client.dllÿ«ø˙õd2A S	Microsoft.Extensions.Primitives.dllÿ«ø˙õd/@ M	Microsoft.Extensions.Options.dllÿ«ø˙õd/? M	Microsoft.Extensions.Logging.dllÿ«ø˙õd<> g	Microsoft.Extensions.Logging.Abstractions.dllÿ«ø˙õd;= e	Microsoft.Extensions.DependencyInjection.dllÿ«ø˙õdH< 	Microsoft.Extensions.DependencyInjection.Abstractions.dllÿ«ø˙õdB; s	Microsoft.Extensions.Configuration.Abstractions.dllÿ«ø˙õd6: [	Microsoft.Extensions.Caching.Memory.dllÿ«ø˙õd<9 g	Microsoft.Extensions.Caching.Abstractions.dllÿ«ø˙õd:8 c	Microsoft.EntityFrameworkCore.SqlServer.dllÿ«ø˙õd;7 e	Microsoft.EntityFrameworkCore.Relational.dllÿ«ø˙õd06 O	Microsoft.EntityFrameworkCore.dllÿ«ø˙õd75 ]	Microsoft.EntityFrameworkCore.Design.dllÿ«ø˙õd=4 i	Microsoft.EntityFrameworkCore.Abstractions.dllÿ«ø˙õd+3 E	Microsoft.Data.SqlClient.dllÿ«ø˙õd42 W	Microsoft.CodeAnalysis.Workspaces.dllÿ«ø˙õd/1 M	Microsoft.CodeAnalysis.Razor.dllÿ«ø˙õd)0 A	Microsoft.CodeAnalysis.dllÿ«ø˙õd;/ e	Microsoft.CodeAnalysis.CSharp.Workspaces.dllÿ«ø˙õd0. O	Microsoft.CodeAnalysis.CSharp.dllÿ«ø˙õd6- [	Microsoft.AspNetCore.Razor.Language.dllÿ«ø˙õd, koÿ«ø˚Yeh+ jaÿ«ø˚Y>r* itÿ«ø˚Y>r) '	Humanizer.dllÿ«ø˙õd( frÿ«ø˚Y>r' esÿ«ø˚Y}5& Y	dotnet-aspnet-codegenerator-design.dllÿ«ø˙õd% deÿ«ø˚Y}$ csÿ«ø˚Y}F# {	AutoMapper.Extensions.Microsoft.DependencyInjection.dllÿ«ø˙õd" )	AutoMapper.dllÿ«ø˙õd#! 5	AuthSystem.Views.pdbÿ«ø˙õd#  5	AuthSystem.Views.dllÿ«ø˙õd, G	AuthSystem.runtimeconfig.jsonÿ«ø˙õd0 O	AuthSystem.runtimeconfig.dev.jsonÿ«ø˙õd )	AuthSystem.pdbÿ«ø˙õd )	AuthSystem.exeÿ«ø˙õd )	AuthSystem.dllÿ«ø˙õd# 5	AuthSystem.deps.jsonÿ«ø˙õd -	appsettings.jsonÿ«ø˙õd+ E	appsettings.Development.jsonÿ«ø˙õd 'netcoreapp3.1ÿ«ø˙õd Debugÿ«ø˙õd  wwwrootÿ«ø˚VÇ<  Viewsÿ«ø˚VÇ< ! 	Startup.csÿ«ø˙õd  Servicesÿ«ø˚VÇ<  	README.mdÿ«ø˙õd ! Propertiesÿ«ø˚VÇ< ! 	Program.csÿ«ø˙õd  objÿ«ø˚VÇ<  Modelsÿ«ø˚VZE ! Migrationsÿ«ø˚VZE  Helpersÿ«ø˚VZE
  Entitiesÿ«ø˚VZE	 # Controllersÿ«ø˚VZE  binÿ«ø˙õd ) 	AuthSystem.slnÿ«ø˙õd$ 9 	AuthSystem.csproj.userÿ«ø˙õd / 	AuthSystem.csprojÿ«ø˙õd% ; 	AuthorizationService.csÿ«ø˙õd - 	appsettings.jsonÿ«ø˙õd* E 	appsettings.Development.jsonÿ«ø   Ç-   ÅG   Å   N   √     Ì√`ßëvG4!Ë∆c≠îÅE[K>7®>˛2ÏÂﬁ◊´ÖLÑº ÙTŸIÅ5∞Ë XÊ|¥Ï$≈íe?
ﬁ
¨
Ä
H

	Ÿ	ß	Ç	]	5	ÂΩì[4¯¡èH”ù#ñÖleÚ[‰TG◊»"¯ÕßÑa;	›µñc\æ≤PD    /cMicrosoft.CodeAnalysis.CSharp.resources.dllt3kMicrosoft.CodeAnalysis.Workspaces.resources.dlls(UMicrosoft.CodeAnalysis.resources.dllr:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dllq/cMicrosoft.CodeAnalysis.CSharp.resources.dllp3kMicrosoft.CodeAnalysis.Workspaces.resources.dllo(UMicrosoft.CodeAnalysis.resources.dlln:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dllm/cMicrosoft.CodeAnalysis.CSharp.resources.dlll3kMicrosoft.CodeAnalysis.Workspaces.resources.dllk(UMicrosoft.CodeAnalysis.resources.dllj:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dlli/cMicrosoft.CodeAnalysis.CSharp.resources.dllh3kMicrosoft.CodeAnalysis.Workspaces.resources.dllg(UMicrosoft.CodeAnalysis.resources.dllf:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dlle/cMicrosoft.CodeAnalysis.CSharp.resources.dlldzh-Hantczh-Hansbtra2iSystem.Security.Cryptography.ProtectedData.dll`ASystem.Runtime.Caching.dll_'SSystem.IdentityModel.Tokens.Jwt.dll^+[System.Diagnostics.DiagnosticSource.dll]1gSystem.Configuration.ConfigurationManager.dll\%OSystem.Composition.TypedParts.dll["ISystem.Composition.Runtime.dllZ"ISystem.Composition.Hosting.dllY%OSystem.Composition.Convention.dllX*YSystem.Composition.AttributedModel.dllW)WSystem.ComponentModel.Annotations.dllV$MSystem.Collections.Immutable.dllUruntimesTruS	pt-BRRplQ5NuGet.Frameworks.dllP3Newtonsoft.Json.dllO5oMicrosoft.VisualStudio.Web.CodeGenerators.Mvc.dllN7sMicrosoft.VisualStudio.Web.CodeGeneration.Utils.dllM<}Microsoft.VisualStudio.Web.CodeGeneration.Templating.dllLFÅMicrosoft.VisualStudio.Web.CodeGeneration.EntityFrameworkCore.dllK1gMicrosoft.VisualStudio.Web.CodeGeneration.dllJ6qMicrosoft.VisualStudio.Web.CodeGeneration.Core.dllI;{Microsoft.VisualStudio.Web.CodeGeneration.Contracts.dllH&QMicrosoft.IdentityModel.Tokens.dllG7sMicrosoft.IdentityModel.Protocols.OpenIdConnect.dllF)WMicrosoft.IdentityModel.Protocols.dllE'SMicrosoft.IdentityModel.Logging.dllD-_Microsoft.IdentityModel.JsonWebTokens.dllC!GMicrosoft.Identity.Client.dllB'SMicrosoft.Extensions.Primitives.dllA$MMicrosoft.Extensions.Options.dll@$MMicrosoft.Extensions.Logging.dll?1gMicrosoft.Extensions.Logging.Abstractions.dll>0eMicrosoft.Extensions.DependencyInjection.dll==Microsoft.Extensions.DependencyInjection.Abstractions.dll<7sMicrosoft.Extensions.Configuration.Abstractions.dll;+[Microsoft.Extensions.Caching.Memory.dll:1gMicrosoft.Extensions.Caching.Abstractions.dll9/cMicrosoft.EntityFrameworkCore.SqlServer.dll80eMicrosoft.EntityFrameworkCore.Relational.dll7%OMicrosoft.EntityFrameworkCore.dll6,]Microsoft.EntityFrameworkCore.Design.dll52iMicrosoft.EntityFrameworkCore.Abstractions.dll4 EMicrosoft.Data.SqlClient.dll3)WMicrosoft.CodeAnalysis.Workspaces.dll2$MMicrosoft.CodeAnalysis.Razor.dll1AMicrosoft.CodeAnalysis.dll00eMicrosoft.CodeAnalysis.CSharp.Workspaces.dll/%OMicrosoft.CodeAnalysis.CSharp.dll.+[Microsoft.AspNetCore.Razor.Language.dll-ko,ja+it*'Humanizer.dll)fr(es'*Ydotnet-aspnet-codegenerator-design.dll&de%cs$;{AutoMapper.Extensions.Microsoft.DependencyInjection.dll#)AutoMapper.dll"5AuthSystem.Views.pdb!5AuthSystem.Views.dll !GAuthSystem.runtimeconfig.json%OAuthSystem.runtimeconfig.dev.json)AuthSystem.pdb)AuthSystem.exe)AuthSystem.dll5AuthSystem.deps.json-appsettings.json Eappsettings.Development.json'netcoreapp3.1	Debugwwwroot	Views!Startup.csServicesREADME.md!Properties!Program.csobj
Models!MigrationsHelpersEntities
#Controllers	bin)AuthSystem.sln9AuthSystem.csproj.user/Aut   )$MMi   *%OMicrosoft.EntityFramework   %MMicrosoft.Data.SqlClient.SNI.dll •   jquery.js
  1» ¸˜ÚÌË„ﬁŸ‘œ ≈¿ª∂±¨ß¢ùòí¯õîçÜxqjc\UNG@92+	Ï	Â	ﬁ	◊	–	…	¬	ã	Ñ	}	våÜÄztnhb\VPJD>82,& ¸ˆÍ‰ﬁÿ“Ã∆¿∫¥Æ®¢úñêäÑ~xrlf`ZTNHB<60*$ ˙ÙÓË‚‹÷– ƒæ∏≤¨¶†öîéàÇ|vpjd^XRLF@:4.(" ˘ÚÎ‰›÷œ»¡∫≥¨•ûÔË·⁄”Ã≈æ∑∞©¢ñ~N6éÜvnf^VF>.&˛ˆ#
˚
Û
Î
„
€
”
À
√
ª
≥
´
£
õ
ì
ã
É
{
s
k
c
[	˚	Û
S
K
C
;
3
+
#



	∫	≤	™	¢	ö	í	n	f	^	V	N	F	>	6~vVN&	.	&				˛ˆÓÊﬁ÷Œ∆æ∂Æ¶ûñéÜnf^F>6.ˇË‡ÿ–»                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              )1)0)/).)-+,+)*()('&%$#"!    ˇ ˇ
	 ˛ ˛ ˚ ˚  ˚ ˇ ˚ ˛ ˙ ˝ ¯ ¸ ˚ ˙ ˘ ¯ Ô ˜ Ô ˆ Ô ı Ó Ù Ó Û Ì Ú Ò  Ô Ó Ì Ï Î ‹ Í ‹ È ‡ Ë ‡ Á ‡ Ê ﬂ Â ﬂ ‰ ﬁ „ › ‚ › · › ‡ › ﬂ › ﬁ € › ƒ ‹ ƒ € ƒ ⁄ ƒ Ÿ ƒ ÿ ƒ ◊ ƒ ÷ ƒ ’ ƒ ‘ ƒ ” ƒ “ ƒ — ƒ – ƒ œ ƒ Œ ƒ Õ ƒ Ã ƒ À ƒ   ƒ … ƒ » ƒ « ƒ ∆ ƒ ≈ ¡ ƒ √ ¬ ¡ ¿ ø æ Ω º ª ∫ π ∏ ∑ ∂
 µ	 ¥	 ≥c ≤c ±c ∞c Øb Æb ≠b ¨b ´a ™a ©a ®a ß § ¶ § • ë § ° £ ° ¢ ê ° û † û ü è û õ ù õ ú é õ ó ö ó ô ñ ò ï ó ï ñ ç ï ì î í ì å íT ëT êT èT éT çT åS ãS äS âS àR áR ÜR ÖR ÑQ ÉQ ÇQ ÅQ Ä,,~,},|+{+z+y+x*w*v*u*t(s(r(q(p'o'n'm'l%k%j%i%h$g$f$e$dcba`_^]\[ZYXWVUTSRQPONMLKJIHGFEDCBA@?>=<;:9876543210/.-,+*)('&%$#"!             
 	        	   π    ‚πC£åp(˛È¡ù\ÇgRSBë’4Ã√'Ø¶ùîf>aë¡ Ò$TÑÍ√˘)Yó√Û#t?
Ë
µ
É
O
!	Á	ß	t	@	Ú»§tJ‰ª}D«àN}¸·ÿÚ‚Ã”√¥≈µça4Á¬öf8Ì∏Ø™ù°ì         1cMicrosoft.CodeAnalysis.CSharp.resources.dll(p5kMicrosoft.CodeAnalysis.Workspaces.resources.dll'o*UMicrosoft.CodeAnalysis.resources.dll'n<yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll'm1cMicrosoft.CodeAnalysis.CSharp.resources.dll'l5kMicrosoft.CodeAnalysis.Workspaces.resources.dll%k*UMicrosoft.CodeAnalysis.resources.dll%j<yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll%i1cMicrosoft.CodeAnalysis.CSharp.resources.dll%h5kMicrosoft.CodeAnalysis.Workspaces.resources.dll$g*UMicrosoft.CodeAnalysis.resources.dll$f<yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll$e1cMicrosoft.CodeAnalysis.CSharp.resources.dll$dzh-Hantczh-Hansbtra4iSystem.Security.Cryptography.ProtectedData.dll` ASystem.Runtime.Caching.dll_)SSystem.IdentityModel.Tokens.Jwt.dll^-[System.Diagnostics.DiagnosticSource.dll]3gSystem.Configuration.ConfigurationManager.dll\'OSystem.Composition.TypedParts.dll[$ISystem.Composition.Runtime.dllZ$ISystem.Composition.Hosting.dllY'OSystem.Composition.Convention.dllX,YSystem.Composition.AttributedModel.dllW+WSystem.ComponentModel.Annotations.dllV&MSystem.Collections.Immutable.dllUruntimesTruSpt-BRRplQ5NuGet.Frameworks.dllP3Newtonsoft.Json.dllO7oMicrosoft.VisualStudio.Web.CodeGenerators.Mvc.dllN9sMicrosoft.VisualStudio.Web.CodeGeneration.Utils.dllM>}Microsoft.VisualStudio.Web.CodeGeneration.Templating.dllLHÅMicrosoft.VisualStudio.Web.CodeGeneration.EntityFrameworkCore.dllK3gMicrosoft.VisualStudio.Web.CodeGeneration.dllJ8qMicrosoft.VisualStudio.Web.CodeGeneration.Core.dllI={Microsoft.VisualStudio.Web.CodeGeneration.Contracts.dllH(QMicrosoft.IdentityModel.Tokens.dllG9sMicrosoft.IdentityModel.Protocols.OpenIdConnect.dllF+WMicrosoft.IdentityModel.Protocols.dllE)SMicrosoft.IdentityModel.Logging.dllD/_Microsoft.IdentityModel.JsonWebTokens.dllC#GMicrosoft.Identity.Client.dllB)SMicrosoft.Extensions.Primitives.dllA&MMicrosoft.Extensions.Options.dll@&MMicrosoft.Extensions.Logging.dll?3gMicrosoft.Extensions.Logging.Abstractions.dll>2eMicrosoft.Extensions.DependencyInjection.dll=?Microsoft.Extensions.DependencyInjection.Abstractions.dll<9sMicrosoft.Extensions.Configuration.Abstractions.dll;-[Microsoft.Extensions.Caching.Memory.dll:3gMicrosoft.Extensions.Caching.Abstractions.dll91cMicrosoft.EntityFrameworkCore.SqlServer.dll82eMicrosoft.EntityFrameworkCore.Relational.dll7'OMicrosoft.EntityFrameworkCore.dll6.]Microsoft.EntityFrameworkCore.Design.dll54iMicrosoft.EntityFrameworkCore.Abstractions.dll4"EMicrosoft.Data.SqlClient.dll3+WMicrosoft.CodeAnalysis.Workspaces.dll2&MMicrosoft.CodeAnalysis.Razor.dll1 AMicrosoft.CodeAnalysis.dll02eMicrosoft.CodeAnalysis.CSharp.Workspaces.dll/'OMicrosoft.CodeAnalysis.CSharp.dll.-[Microsoft.AspNetCore.Razor.Language.dll-ko,ja+it*'Humanizer.dll)fr(es',Ydotnet-aspnet-codegenerator-design.dll&de%cs$={AutoMapper.Extensions.Microsoft.DependencyInjection.dll#)AutoMapper.dll"5AuthSystem.Views.pdb!5AuthSystem.Views.dll #GAuthSystem.runtimeconfig.json'OAuthSystem.runtimeconfig.dev.json)AuthSystem.pdb)AuthSystem.exe)AuthSystem.dll5AuthSystem.deps.json-appsettings.json"Eappsettings.Development.json'netcoreapp3.1Debug wwwroot
 Views! Startup.cs Services README.md! Properties! Program.cs obj Models! Migrations Helpers Entities
# Controllers	 bin) AuthSystem.sln9 AuthSystem.csproj.user/     83gMicrosoft.Extensions.Caching.A   $EMicrosoft.Data.SqlClient.dll ñ ò   /Index.cshtml.g.cs ﬁ „   ˜ …í[.˜                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     5 U'3eec062c-1463-4780-a3cd-e651e09576e316.8.134.5269+ U805375ec-d614-41f5-8993-5843fe63ea821.05 U'7b3bd5d3-8362-427d-89a4-742f2e2256c216.8.134.52695 U'4b32c687-281c-4c6d-a2a1-3d874bfa2d4d16.8.134.52695 U'd9212c5d-975a-49e6-a753-2f586bfbf07716.8.134.5269
   ¯ ¯ì\/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       6U'3eec062c-1463-4780-a3cd-e651e09576e316.8.134.5269,U805375ec-d614-41f5-8993-5843fe63ea821.06U'7b3bd5d3-8362-427d-89a4-742f2e2256c216.8.134.52696U'4b32c687-281c-4c6d-a2a1-3d874bfa2d4d16.8.134.52695U'	d9212c5d-975a-49e6-a753-2f586bfbf07716.8.134.5269   2$ Ó› ∑£è|hUA-Ò›…µ°çyeQ=)ÌŸ≈±ùâuaM9%˝È’¡≠ôÖs`L8$                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        2 1ÿ«ø˛ûÕñ1 /ÿ«ø˛ö0 .ÿ«ø˛ñ ï/ ÿ«ø˛ÅÇ. 	ÿ«¿smLõ- &ÿ«ø˚ïœË, %ÿ«ø˚ïœË+ $ÿ«ø˚ïœË* #ÿ«ø˚ï®È) "ÿ«ø˚ï®È( ÿ«ø˚ï®È' ÿ«ø˚ï®È& !ÿ«ø˚ï®È% ÿ«ø˚ï®È$ ÿ«ø˚ïÅÛ# ÿ«ø˚ïÅÛ" ÿ«ø˚ïÅÛ!  Áÿ«ø˚ï[    ˝ÿ«ø˚ï[   „ÿ«ø˚ï4
  Ëÿ«ø˚ï4
  Ïÿ«¿m5ßÅ  ‰ÿ«ø˚îqL  Êÿ«ø˚îqL  Âÿ«ø˚íÎß  ‚ÿ«ø˚íùΩ  ·ÿ«ø˚íùΩ  ÷ÿ«ø˚ëç  ≈ÿ«ø˚ëç  ”ÿ«ø˚ëf  «ÿ«ø˚ëf  ¿ÿ«ø˚ëf  øÿ«ø˚ë?$  Ωÿ«ø˚ë6  ºÿ«ø˚ë6  ∏ÿ«ø˚ê£J  ∫ÿ«ø˚êU_  ªÿ«ø˚êU_  πÿ«ø˚êU_  ¥ÿ«ø˚êx
  ∑ÿ«ø˚è‡}	 ÿ«ø˚èDß  ∂ÿ«ø˚èDß ÿ«ø˚èDß  µÿ«ø˚è∫  ≥ÿ«ø˚éœ÷ ÿ«ø˚çø@ ÿ«ø˚âUE 		ÿ«ø˚àπ{ 	ÿ«ø˚àDò
   2´ ÈÔ∆¿˚ı’»‚∫€Œ¡û≥•¨óêâÇm{tf_X.CQJ 5<'Ôˆ˝Ë·⁄”Ãπ≤´                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               12/1.0/.&-%,$+#*")('!&%$#" Á! ˝  „ Ë Ï ‰ Ê Â ‚ · ÷ ≈ ” « ¿ ø Ω º ∏ ∫ ª π ¥ ∑
	 ∂ µ ≥	       $˚ˆóC±yL‡•j5ÚØäa5
Ô
π
s
N
%	Û	µ	o	9	…{4Ë≠o+‰êN∆äFÓ∫u/È≠Uˇ√ÄD–ëL ˇ — ©                                   &?
 ##	RestoreToolRestoreTool ø,>
 ))	RestoreSuccessRestoreSuccess øK=
 'i	ShowRequestIdAuthSystem.Models.ErrorViewModel.ShowRequestId º	C<
 a	RequestIdAuthSystem.Models.ErrorViewModel.RequestId º=;
 )M		ErrorViewModelAuthSystem.Models.ErrorViewModel º2:
 //AuthSystem.ModelsAuthSystem.Models º>9
 _DownAuthSystem.Migrations.LoginMigration.Down	 ∏!:8
 [UpAuthSystem.Migrations.LoginMigration.Up	 ∏!A7
 )U		LoginMigrationAuthSystem.Migrations.LoginMigration ∏:6
 77AuthSystem.MigrationsAuthSystem.Migrations ∏T5
 !BuildModelAuthSystem.Migrations.DataContextModelSnapshot.BuildModel	 ∫!V4
 =i	DataContextModelSnapshotAuthSystem.Migrations.DataContextModelSnapshot ∫:3
 77AuthSystem.MigrationsAuthSystem.Migrations ∫	D2
 e	PasswordAuthSystem.Models.AuthenticateModel.Password ªD1
 e	UsernameAuthSystem.Models.AuthenticateModel.Username ªC0
 /S		AuthenticateModelAuthSystem.Models.AuthenticateModel ª2/
 //AuthSystem.ModelsAuthSystem.Models ªV.
 -wBuildTargetModelAuthSystem.Migrations.LoginMigration.BuildTargetModel	 π!B-
 )U	LoginMigrationAuthSystem.Migrations.LoginMigration π:,
 77AuthSystem.MigrationsAuthSystem.Migrations π
@+
 c	ErrorAuthSystem.Controllers.HomeController.Error	 ¥ D*
 g	PrivacyAuthSystem.Controllers.HomeController.Privacy	 ¥@)
 c	IndexAuthSystem.Controllers.HomeController.Index	 ¥R(
 )u	HomeControllerAuthSystem.Controllers.HomeController.HomeController	 ¥E'
 g_loggerAuthSystem.Controllers.HomeController._logger ¥2B&
 )W		HomeControllerAuthSystem.Controllers.HomeController ¥<%
 99AuthSystem.ControllersAuthSystem.Controllers ¥
9$
 U	UsersAuthSystem.Helpers.DataContext.Users ∑J#
 'eOnConfiguringAuthSystem.Helpers.DataContext.OnConfiguring	 ∑!E"
 #a	DataContextAuthSystem.Helpers.DataContext.DataContext	 ∑L!
 )g_configurationAuthSystem.Helpers.DataContext._configuration ∑	+8 
 #I		DataContextAuthSystem.Helpers.DataContext ∑4
 11AuthSystem.HelpersAuthSystem.Helpers ∑4
 E	ConfigureAuthSystem.Startup.Configure	D
 /U	ConfigureServicesAuthSystem.Startup.ConfigureServices	<
 'M	ConfigurationAuthSystem.Startup.Configuration0
 A	StartupAuthSystem.Startup.Startup	'
 1		StartupAuthSystem.Startup#
 !!AuthSystemAuthSystem	D
 /U		AutoMapperProfileAuthSystem.Helpers.AutoMapperProfile ∂4
 11AuthSystem.HelpersAuthSystem.Helpers ∂D
 /U	CreateHostBuilderAuthSystem.Program.CreateHostBuilder	$*
 ;	MainAuthSystem.Program.Main	'
 1		ProgramAuthSystem.Program#
 !!AuthSystemAuthSystem
A
 %W	PasswordSaltAuthSystem.Entities.User.PasswordSalt µA
 %W	PasswordHashAuthSystem.Entities.User.PasswordHash µ3
 I	EmailAuthSystem.Entities.User.Email µ9
 O	UsernameAuthSystem.Entities.User.Username µ9
 O	LastnameAuthSystem.Entities.User.Lastname µ;
 Q	FirstnameAuthSystem.Entities.User.Firstname µ-
 C	GdAuthSystem.Entities.User.Gd µ	+
 =		UserAuthSystem.Entities.User µ6

 33AuthSystem.EntitiesAuthSystem.Entities µN	
 %q	AuthenticateAuthSystem.Controllers.AuthController.Authenticate	 ≥@
 c	IndexAuthSystem.Controllers.AuthController.Index	 ≥R
 )u	AuthControllerAuthSystem.Controllers.AuthController.AuthController	 ≥N
 %q	_authServiceAuthSystem.Controllers.AuthController._authService ≥	&B
 )W		AuthControllerAuthSystem.Controllers.AuthController ≥<
 99AuthSystem.ControllersAuthSystem.Controllers ≥B
 5K	AuthorizationServiceAuthSystem.AuthorizationService"
 !!	AuthSystemAuthSystem-
 ++	TargetFrameworkTar   #Å$   "|   !?   ‚    &‚àÕMx›,]¡ˆŸ•Ùâÿmº†ÑhL0=L∏'5°√—Üﬁx
–
U	‹	aÊæbósX9˚◊≈)ﬁÕf™ó@ã+£]Ì$duw
v	˝	Ç	é3Ü<&¢‰ÒŒÜ:˛E
®
/	¥	9¿hª"0Ñe
d	Î	pı|rJi[
m	Ù	y˛Ö)|J∏
å
	ò	§KûI
ﬂã£u`ºΩÌ‹!
ˆO¡∏ﬁŒÒZNÌC
Ñ
	ê	úBï7 ≤Õ
π
@˘—	≈Hì	J                     !E__tagHelperStringValueBuffer ±/__tagHelperRunner ∞ C__tagHelperExecutionContext Ø;__tagHelperAttribute_12 Æ;__tagHelperAttribute_11 ≠;__tagHelperAttribute_10 ¨9__tagHelperAttribute_9 ´9__tagHelperAttribute_8 ™9__tagHelperAttribute_7 ©9__tagHelperAttribute_6 ®9__tagHelperAttribute_5 ß9__tagHelperAttribute_4 ¶9__tagHelperAttribute_3 •9__tagHelperAttribute_2 §9__tagHelperAttribute_1 £9__tagHelperAttribute_0 ¢5Views_Shared__Layout °!AspNetCore †	Html ü	Json ûComponent ùUrl ú;ModelExpressionProvider õ%ExecuteAsync öFÅ__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper ô8s__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper ò:w__Microsoft_AspNetCore_Mvc_TagHelpers_ScriptTagHelper óHÅ__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper ñ;__tagHelperScopeManager ï$K__backed__tagHelperScopeManager î!E__tagHelperStringValueBuffer ì/__tagHelperRunner í C__tagHelperExecutionContext ë9__tagHelperAttribute_4 ê9__tagHelperAttribute_3 è9__tagHelperAttribute_2 é9__tagHelperAttribute_1 ç9__tagHelperAttribute_0 å-Views_Auth_Index ã!AspNetCore ä	Html â	Json àComponent áUrl Ü;ModelExpressionProvider Ö%ExecuteAsync ÑHÅ__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper É;__tagHelperScopeManager Ç$K__backed__tagHelperScopeManager Å!E__tagHelperStringValueBuffer Ä/__tagHelperRunnerC__tagHelperExecutionContext~9__tagHelperAttribute_1}9__tagHelperAttribute_0|*YViews_Shared__ValidationScriptsPartial{!AspNetCorez1VerifyPasswordHashy1CreatePasswordHashx%Authenticatew#AuthServicev_contextu#AuthServicet%Authenticates7IAuthorizationServicer3AuthSystem.ServicesqHtmlpJsonoComponentnUrlm;ModelExpressionProviderl%ExecuteAsynck-Views_Home_Indexj!AspNetCoreiHtmlhJsongComponentfUrle;ModelExpressionProviderd%ExecuteAsyncc1Views_Shared_Errorb!AspNetCoreaHtml`Json_Component^Url];ModelExpressionProvider\%ExecuteAsync[1Views_Home_PrivacyZ!AspNetCoreYHtmlXJsonWComponentVUrlU;ModelExpressionProviderT%ExecuteAsyncS-Views__ViewStartR!AspNetCoreQHtmlPJsonOComponentNUrlM;ModelExpressionProviderL%ExecuteAsyncK1Views__ViewImportsJ!AspNetCoreI1MSBuildAllProjectsH*YPkgMicrosoft_EntityFrameworkCore_ToolsG'SPkgMicrosoft_CodeAnalysis_AnalyzersF1MSBuildAllProjectsE-NuGetToolVersionD/NuGetProjectStyleC3NuGetPackageFoldersB-NuGetPackageRootA/ProjectAssetsFile@#RestoreTool?)RestoreSuccess>'ShowRequestId=RequestId<)ErrorViewModel;/AuthSystem.Models:Down9Up8)LoginMigration77AuthSystem.Migrations6!BuildModel5=DataContextModelSnapshot47AuthSystem.Migrations3Password2Username1/AuthenticateModel0/AuthSystem.Models/-BuildTargetModel.)LoginMigration-7AuthSystem.Migrations,	Error+Privacy*	Index))HomeController(_logger')HomeController&9AuthSystem.Controllers%	Users$'OnConfiguring##DataContext")_configuration!#DataContext 1AuthSystem.HelpersConfigure/ConfigureServices'ConfigurationStartupStartup!AuthSystem/AutoMapperProfile1AuthSystem.Helpers/CreateHostBuilderMainProgram!AuthSystem%PasswordSalt%PasswordHash	EmailUsernameLastnameFirstnameGdUser3AuthSystem.Entities
%Authenticate		Index)AuthController%_authService)AuthController9AuthSystem.Controllers5AuthorizationService!   %7AuthSystem.Migrations6
ø ø
Ö ıÔ˚ÄztnZTNHB<Ë·⁄”Ã≈˝ˆÔË·æ∑∞©¢õîçÜg`5.' îçÜ⁄”Ã©¢õ≈æ∑∞xqjc\UNG@92+$˙ÛÏÂﬁ◊–…¬ª¥≠¶=5-%˝ıÌÂ›’Õ≈Ωµ≠•ùï/(!˛üòëäÉ|ung`YRKD=6çÖ}ume]UME=5-%
˝
ı
Ì
Â
›
’
Õ
≈
Ω
µ
≠
•
ù∏±™£úïçÖ}ume]UMEˆÓÊﬁ÷Œ∆
ï
ç
Ö                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                Ï “ Ï — Ï – Á æ Á Ω Á º Á ª Á ∫ Á π Á ∏ Á ∑ Á ∂ Á µ Á ¥ Á ≥ Á ≤ Á ± Á ∞ Á Ø Á Æ Á ≠ Á ¨ Á ´ Á ™ Á © Á ® Á ß Á ¶ Á • Á § Á £ Á ¢ Á ° Á † „ ü „ û „ ù „ ú „ õ „ ö „ ô „ ò „ ó „ ñ „ ï „ î „ ì „ í „ ë „ ê „ è „ é „ ç „ å „ ã „ ä Ë â Ë à Ë á Ë Ü Ë Ö Ë Ñ Ë É Ë Ç Ë Å Ë Ä Ë Ë~ Ë} Ë| Ë{ Ëz    Ïy Ï œ Ï Œ Ï Õ Ï Ã Ï À Ï   Ï … ‰p ‰o ‰n ‰m ‰l ‰k ‰j ‰i Êh Êg Êf Êe Êd Êc Êb Êa Â` Â_ Â^ Â] Â\ Â[ ÂZ ÂY ‚X ‚W ‚V ‚U ‚T ‚S ‚R ‚Q ·P ·O ·N ·M ·L ·K ·J ·I ¿H øG øF øE øD øC øB øA ø@ ø? ø> º= º< º; º: ∏9 ∏8 ∏7 ∏6 ∫5 ∫4 ∫3 ª2 ª1 ª0 ª/ π. π- π, ¥+ ¥* ¥) ¥( ¥' ¥& ¥% ∑$ ∑# ∑" ∑! ∑  ∑ ∂ ∂ µ µ µ µ µ µ µ µ µ
 ≥	 ≥ ≥ ≥ ≥ ≥	   ‚    )˙ÙÓË‚°c"›∏çbDˆΩ{G¯‡ª£~Y2
‚
ß
Ä
[
9
	¯	π	v	3Ï´f!◊ù_!ﬂ†]”õ_#„∏a√}2Ô®rC‹∞Üh  ú  aÇ
  Å5  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\Sdk\Sdk.propseÇ
  Å=  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Web\Sdk\Sdk.propsÇ	  -  	appsettings.json'Ç	  E  	appsettings.Development.json)Ç	  I  	wwwroot\lib\jquery\LICENSE.txt1Ç	  Y  	wwwroot\lib\jquery\dist\jquery.min.map0Ç	  W  	wwwroot\lib\jquery\dist\jquery.min.js,Ç 	  O  	wwwroot\lib\jquery\dist\jquery.js3Å	  ]  	wwwroot\lib\jquery-validation\LICENSE.mdDÅ~	    	wwwroot\lib\jquery-validation\dist\jquery.validate.min.js@Å}	  w  	wwwroot\lib\jquery-validation\dist\jquery.validate.jsHÅ|
  Å  	wwwroot\lib\jquery-validation\dist\additional-methods.min.jsCÅ{	  }  	wwwroot\lib\jquery-validation\dist\additional-methods.js@Åz	  w  	wwwroot\lib\jquery-validation-unobtrusive\LICENSE.txtXÅy
  Å%  	wwwroot\lib\jquery-validation-unobtrusive\jquery.validate.unobtrusive.min.jsTÅx
  Å  	wwwroot\lib\jquery-validation-unobtrusive\jquery.validate.unobtrusive.js(Åw	  G  	wwwroot\lib\bootstrap\LICENSE=Åv	  q  	wwwroot\lib\bootstrap\dist\js\bootstrap.min.js.map9Åu	  i  	wwwroot\lib\bootstrap\dist\js\bootstrap.min.js9Åt	  i  	wwwroot\lib\bootstrap\dist\js\bootstrap.js.map5Ås	  a  	wwwroot\lib\bootstrap\dist\js\bootstrap.jsDÅr	    	wwwroot\lib\bootstrap\dist\js\bootstrap.bundle.min.js.map@Åq	  w  	wwwroot\lib\bootstrap\dist\js\bootstrap.bundle.min.js@Åp	  w  	wwwroot\lib\bootstrap\dist\js\bootstrap.bundle.js.map<Åo	  o  	wwwroot\lib\bootstrap\dist\js\bootstrap.bundle.js?Ån	  u  	wwwroot\lib\bootstrap\dist\css\bootstrap.min.css.map;Åm	  m  	wwwroot\lib\bootstrap\dist\css\bootstrap.min.css;Ål	  m  	wwwroot\lib\bootstrap\dist\css\bootstrap.css.map7Åk	  e  	wwwroot\lib\bootstrap\dist\css\bootstrap.cssGÅj
  Å  	wwwroot\lib\bootstrap\dist\css\bootstrap-reboot.min.css.mapBÅi	  {  	wwwroot\lib\bootstrap\dist\css\bootstrap-reboot.min.cssBÅh	  {  	wwwroot\lib\bootstrap\dist\css\bootstrap-reboot.css.map>Åg	  s  	wwwroot\lib\bootstrap\dist\css\bootstrap-reboot.cssDÅf	    	wwwroot\lib\bootstrap\dist\css\bootstrap-grid.min.css.map@Åe	  w  	wwwroot\lib\bootstrap\dist\css\bootstrap-grid.min.css@Åd	  w  	wwwroot\lib\bootstrap\dist\css\bootstrap-grid.css.map<Åc	  o  	wwwroot\lib\bootstrap\dist\css\bootstrap-grid.cssÅb	  1  	wwwroot\js\site.jsÅa	  3  	wwwroot\favicon.icoÅ`	  5  	wwwroot\css\site.css"Å_	  ;  	Views\_ViewStart.cshtml$Å^	  ?  	Views\_ViewImports.cshtml8Å]	  g  	Views\Shared\_ValidationScriptsPartial.cshtml&Å\	  C  	Views\Shared\_Layout.cshtml$Å[	  ?  	Views\Shared\Error.cshtml$ÅZ	  ?  	Views\Home\Privacy.cshtml"ÅY	  ;  	Views\Home\Index.cshtml"ÅX	  ;  	Views\Auth\Index.cshtmlÅW	  !  	Startup.cs"ÅV	  ;  	Services\AuthService.csÅU	  !  	Program.cs#ÅT	  =  	Models\ErrorViewModel.cs&ÅS	  C  	Models\AuthenticateModel.cs1ÅR	  Y  	Migrations\DataContextModelSnapshot.cs?ÅQ	  u  	Migrations\20210202153706_LoginMigration.Designer.cs6ÅP	  c  	Migrations\20210202153706_LoginMigration.cs!ÅO	  9  	Helpers\DataContext.cs'ÅN	  E  	Helpers\AutoMapperProfile.csÅM	  -  	Entities\User.cs(ÅL	  G  	Controllers\HomeController.cs(ÅK	  G  	Controllers\AuthController.cs"ÅJ	  ;  	AuthorizationService.csBÅI	  ] )bin\Release\netcoreapp3.1\AuthSystem.dllRelease|AnyCPU>ÅH	  Y %bin\Debug\netcoreapp3.1\AuthSystem.dllDebug|AnyCPU;ÅG	  m  	Microsoft.VisualStudio.Web.CodeGeneration.Design.ÅF	  S  	Microsoft.EntityFrameworkCore.Tools2ÅE	  [  	Microsoft.EntityFrameworkCore.SqlServer(ÅD	  G  	Microsoft.EntityFrameworkCore>ÅC	  s  	AutoMapper.Extensions.Microsoft.DependencyInjectionÅB	  !  	AutoMapperÅA	  )  AuthSystem.sln+	 	 / +AuthSystem.csprojRelease|Any CPU)	 	 / 'A   +Çz   ,Ç_   (ÇA   *Ç%   'Ç   
 6‰s®K
é	ã€Që˘RJ                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ±W-ÅQindexSymbolDefinition_DefiningFileId_IndexSymbolDefinitionCREATE INDEX [SymbolDefinition_DefiningFileId_Index]
    ON [SymbolDefinition] ([DefiningFileId])ÅC-ÅGindexSymbolDefinition_Name_IndexSymbolDefinitionCREATE INDEX [SymbolDefinition_Name_Index]
    ON [SymbolDefinition] ([Name] COLLATE NOCASE)Ö=--ä-tableSymbolDefinitionSymbolDefinitionCREATE TABLE [SymbolDefinition]
(
    [SymbolDefinitionId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    [ProviderId] INTEGER NOT NULL
        REFERENCES [ProviderEntity]([ProviderId])
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [Name] NVARCHAR(255) NOT NULL COLLATE NOCASE,
    [FullyQualifiedName] NVARCHAR(255) COLLATE NOCASE,
    [Kind] INTEGER NOT NULL,
    [Accessibility] INTEGER NOT NULL,
    [DefiningFileId] INTEGER NOT NULL
        REFERENCES [FileSystemEntity]([FileSystemEntityId]) 
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [LocationRow] INTEGER NOT NULL,
    [LocationColumn] INTEGER NOT NULL
)Å/_-Å_indexFileScannerCache_FileSystemEntityId_IndexFileScannerCacheCREATE INDEX [FileScannerCache_FileSystemEntityId_Index]
    ON [FileScannerCache]([FileSystemEntityId])ÉU
--Ü]tableFileScannerCacheFileScannerCacheCREATE TABLE [FileScannerCache]
(
    [FileScannerCacheId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, 
    [FileSystemEntityId] INTEGER NOT NULL REFERENCES [FileSystemEntity]([FileSystemEntityId])
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [ProviderId] INTEGER NOT NULL REFERENCES [ProviderEntity]([ProviderId])
        ON DELETE CASCADE,
    [Type] INTEGER NOT NULL,
    [Timestamp] DATETIME NULL
)Å-	/)ÇindexProviderType_TypeProviderEntity
CREATE UNIQUE INDEX [ProviderType_Type]
    ON [ProviderEntity] ([ProviderType] COLLATE NOCASE,[ProviderVersion] COLLATE NOCASE)Ç ))É;tableProviderEntityProviderEntity	CREATE TABLE [ProviderEntity]
(
    [ProviderId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    [ProviderType] NVARCHAR(20) NOT NULL COLLATE NOCASE,
    [ProviderVersion] NVARCHAR(20) NOT NULL COLLATE NOCASE
)Å:E-ÇindexFileSystemEntity_Parent_NameFileSystemEntityCREATE UNIQUE INDEX [FileSystemEntity_Parent_Name]
    ON [FileSystemEntity] ([Name] COLLATE NOCASE, [ParentFileSystemEntityId])ÅBk-ÅyindexFileSystemEntity_ParentFileSystemEntityId_IndexFileSystemEntityCREATE INDEX [FileSystemEntity_ParentFileSystemEntityId_Index]
    ON [FileSystemEntity] ([ParentFileSystemEntityId])ÅC-ÅGindexFileSystemEntity_Name_IndexFileSystemEntityCREATE INDEX [FileSystemEntity_Name_Index]
    ON [FileSystemEntity] ([Name] COLLATE NOCASE)ÉH--ÜCtableFileSystemEntityFileSystemEntityCREATE TABLE [FileSystemEntity]
(
    [FileSystemEntityId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    [Name] NVARCHAR(255) NOT NULL COLLATE NOCASE,
    [ParentFileSystemEntityId] INTEGER NULL
        REFERENCES [FileSystemEntity]([FileSystemEntityId])
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [IsFile] BIT NOT NULL,
    [LastObserved] DATETIME NOT NULL DEFAULT current_timestamp
)o1ÅindexSetting_Name_IndexSettingCREATE INDEX [Setting_Name_Index]
  ON [Setting] ([Name] COLLATE NOCASE)P++Ytablesqlite_sequencesqlite_sequenceCREATE TABLE sqlite_sequence(name,seq)ÅGÇetableSettingSettingCREATE TABLE [Setting]
(
    [SettingId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    [Name] NVARCHAR(255) NOT NULL COLLATE NOCASE,
    [Value] NVARCHAR(255) NULL
)   
 é NéˆO1|«L° é                                                                                                                  Ü--ãWviewFullPathEntitiesFullPathEntitiesCREATE VIEW FullPathEntities as
WITH RECURSIVE FullPathEntities AS(
        SELECT FileSystemEntityId AS BaseSystemEntityId, ParentFileSystemEntityId AS CurrentParentEntityId, Name AS CurrentPath FROM FileSystemEntity
        UNION
        SELECT
            P.BaseSystemEntityId,
            FS.ParentFileSystemEntityId AS CurrentParentEntityId,
            FS.Name || '\' || P.CurrentPath AS CurrentPath
        FROM FullPathEntities AS P
        INNER JOIN FileSystemEntity AS FS ON
        FS.FileSystemEntityId = P.CurrentParentEntityId
)
SELECT FS.*,P.CurrentPath As FullPath
FROM FullPathEntities AS P
INNER JOIN FileSystemEntity AS FS ON FS.FileSystemEntityId = P.BaseSystemEntityId
WHERE CurrentParentEntityId IS NULLÅ([)ÅYindexFileSystemData_FileSystemEntityId_IndexFileSystemDataCREATE INDEX [FileSystemData_FileSystemEntityId_Index]
    ON [FileSystemData] ([FileSystemEntityId])Ñx))â+tableFileSystemDataFileSystemDataCREATE TABLE [FileSystemData]
(
    [FileSystemDataId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    [FileSystemEntityId] INTEGER NOT NULL
        REFERENCES [FileSystemEntity]([FileSystemEntityId]) 
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [ProviderId] INTEGER NOT NULL REFERENCES [ProviderEntity]([ProviderId])
        ON DELETE CASCADE,
    [Type] NVARCHAR(20) NOT NULL COLLATE NOCASE,
    [Name] NVARCHAR(255) NOT NULL COLLATE NOCASE,
    [Value] TEXT NULL,
    [Target] NVARCHAR(255) NULL COLLATE NOCASE,
    [Context] NVARCHAR(255) NULL COLLATE NOCASE
)Å2_3Å_indexFileSystemReference_ReferenceFileId_IndexFileSystemReferenceCREATE INDEX [FileSystemReference_ReferenceFileId_Index]
    ON [FileSystemReference]([ReferenceFileId])Å2_3Å_indexFileSystemReference_DependantFileId_IndexFileSystemReferenceCREATE INDEX [FileSystemReference_DependantFileId_Index]
    ON [FileSystemReference]([DependantFileId])Ü33ã]tableFileSystemReferenceFileSystemReferenceCREATE TABLE [FileSystemReference]
(
    [FileSystemReferenceEntityId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, 
    [ProviderId] INTEGER NOT NULL
        REFERENCES [ProviderEntity]([ProviderId])
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [DependantFileId] INTEGER NOT NULL
        REFERENCES [FileSystemEntity]([FileSystemEntityId])
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [ReferenceFileId] INTEGER NULL
        REFERENCES [FileSystemEntity]([FileSystemEntityId])
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [ReferenceFilePath] TEXT NULL COLLATE NOCASE,
    [Target] NVARCHAR(255) NULL COLLATE NOCASE,
    [Context] NVARCHAR(255) NULL COLLATE NOCASE,
    [Type] INTEGER NULL
)Å$W-ÅQindexSymbolDefinition_DefiningFileId_IndexSymbolDefinitionCREATE INDEX [SymbolDefinition_DefiningFileId_Index]
    ON [SymbolDefinition] ([DefiningFileId])ÅC-ÅGindexSymbolDefinition_Name_IndexSymbolDefinitionCREATE INDEX [SymbolDefinition_Name_Index]
    ON [SymbolDefinition] ([Name] COLLATE NOCASE)Ö=--ä-tableSymbolDefinitionSymbolDefinitionCREATE TABLE [SymbolDefinition]
(
    [SymbolDefinitionId] INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    [ProviderId] INTEGER NOT NULL
        REFERENCES [ProviderEntity]([ProviderId])
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [Name] NVARCHAR(255) NOT NULL COLLATE NOCASE,
    [FullyQualifiedName] NVARCHAR(255) COLLATE NOCASE,
    [Kind] INTEGER NOT NULL,
    [Accessibility] INTEGER NOT NULL,
    [DefiningFileId] INTEGER NOT NULL
        REFERENCES [FileSystemEntity]([FileSystemEntityId]) 
        ON UPDATE CASCADE
        ON DELETE CASCADE,
    [LocationRow] INTEGER NOT NULL,
    [LocationColumn] INTEGER NOT NULL
)Å/_-Å_indexFileScannerCache_FileSystemEntityId_IndexFileScannerCacheCREATE INDEX [FileScannerCache_FileSystemEntityId_Index]
    ON [FileScannerCache]([FileSystemEntityId])
   ¿
√ ÓÁ‡Ÿ“ÀƒΩ∂Ø®°öìåÖ~wpib[TMF?81*# ˘ÚÎ‰›÷œ»¡∫≥¨•ûóêâÇ{tmf_XQJC<5.' ˝ˆÔË·⁄”Ã≈æ∑∞©¢õîçÜxqjc\UNG@92+$˙ÛÏÂﬁ◊–…¬ª¥≠¶üòëäÉ|ung`YRKD=6/(!˛˜È‚€‘Õ∆ø∏±™£úïéáÄyrkd]VOHA:3,%	
˚
Ù
Ì
Ê
ﬂ
ÿ
—
 
√˚ı                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ~}|{zyxwvutsrqponmlkjihgfedcba`_^]\[ZYXWVUTSRQPONMLKJIHGFEDCBA@?>=<;:9876543210/.-,+*)('&%$#"! 
	  ˇ ˛ ˝ ¸ ˚ ˙ ˘ ¯ ˜ ˆ ı Ù Û Ú Ò  Ô Ó Ì Ï Î Í È Ë Á Ê Â ‰ „ ‚ · ‡ ﬂ ﬁ › ‹ € ⁄ Ÿ ÿ ◊ ÷ ’ ‘ ” “ — – œ Œ Õ Ã À   … » « ∆ ≈ ƒ √ ¬ ¡	
   ¿É ¸˜ÒÎÂﬂŸ”Õ«¡ªµØ©£ùóëãÖysmga[UOIC=71+%˚ıÔÈ„›◊—À≈øπ≥≠ß°õïèâÉ}wqke_YSMGA;5/)#ˇ˘ÛÌÁ·€’œ…√Ω∑±´•üôìçáÅ{uoic]WQKE?93-'!	˝˜ÒÎÂﬂŸ”Õ«¡ªµØ©£ùóëãÖysmga[UOIC=71+%˚ıÔÈ„›◊—À≈øπ≥≠ß°õïèâÉ                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ~ } | { z y x w v u t s r q p o n m l k j i h g f e d c b a ` _ ^ ] \ [ Z Y X W V U T S R Q P O N M L K J I H G F E D C B A @ ? > = < ; : 9 8 7 6 5 4 3 2 1 0 / . - , + * ) ( ' & % $ # " !                        
 	            ˇ  ˛  ˝  ¸  ˚  ˙  ˘  ¯  ˜  ˆ  ı  Ù  Û  Ú  Ò    Ô  Ó  Ì  Ï  Î  Í  È  Ë  Á  Ê  Â  ‰  „  ‚  ·  ‡  ﬂ  ﬁ  ›  ‹  €  ⁄  Ÿ  ÿ  ◊  ÷  ’  ‘  ”  “  —  –  œ  Œ  Õ  Ã  À     …  »  «  ∆  ≈  ƒ  √  ¬  ¡  	   
¬ ìDÛ
à	Ó	à	9Æ]¬                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ÉÑc
 U%Üà= )64c063c9-0e21-46c8-a25b-44eb83b45fcaIntellisense{
  "CommandLineArgs": [
    "/noconfig",
    "/unsafe-",
    "/checked-",
    "/nowarn:1701,1702,1701,1702",
    "/fullpaths",
    "/nostdlib+",
    "/errorreport:prompt",
    "/warn:4",
    "/define:TRACE;RELEASE;NETCOREAPP;NETCOREAPP3_1",
    "/highentropyva+",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\automapper\\10.1.1\\lib\\netstandard2.0\\AutoMapper.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\automapper.extensions.microsoft.dependencyinjection\\8.1.0\\lib\\netstandard2.0\\AutoMapper.Extensions.Microsoft.DependencyInjection.dll",
    "/reference:C:   9O		 U1  )ed84fd5a-4ee1-4489-9ddd-1dd46ff97f19BuildConfigurationRelease|AnyCPUÉÑS U%Üà! %64c063c9-0e21-46c8-a25b-44eb83b45fcaIntellisense{
  "CommandLineArgs": [
    "/noconfig",
    "/unsafe-",
    "/checked-",
    "/nowarn:1701,1702,1701,1702",
    "/fullpaths",
    "/nostdlib+",
    "/errorreport:prompt",
    "/warn:4",
    "/define:TRACE;DEBUG;NETCOREAPP;NETCOREAPP3_1",
    "/highentropyva+",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\automapper\\10.1.1\\lib\\netstandard2.0\\AutoMapper.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\automapper.extensions.microsoft.dependencyinjection\\8.1.0\\lib\\netstandard2.0\\AutoMapper.Extensions.Microsoft.DependencyInjection.dll",
       -M	 U1  %ed84fd5a-4ee1-4489-9ddd-1dd46ff97f19BuildConfigurationDebug|AnyCPUd	 U;I  55b77c41-9751-433c-9d5f-5e815f152562IsDefaultStartupProject{
  "debugType": "managed"
}Å
 	U-Å=  9e4637d9-06df-4b6d-8809-468ebd43b197ProjectBaseTypes{
  "Types": {
    "AuthSystem.csproj": "fae04ec0-301f-11d3-bf4b-00c04f79efbc"
  }
}àh
 	U+êa  94d3e38b-3f54-4224-b96d-e31cc1a3a351SolutionContent{
  "ProjectsByGuid": {
    "{BB939352-05B4-48C4-ADE4-9F83D9D68070}": {
      "Path": "AuthSystem.csproj",
      "Dependencies": [],
      "ParentProjectGuid": null,
      "ProjectConfigurations": {
        "Debug|Any CPU": {
          "ConfigurationName": "Debug",
          "FullName": "Debug|AnyCPU",
          "IncludeInBuild": true,
          "PlatformName": "AnyCPU"
        },
        "Release|Any CPU": {
          "ConfigurationName": "Release",
          "FullName": "Release|AnyCPU",
          "IncludeInBuild": true,
          "PlatformName": "AnyCPU"
        }
      },
      "ProjectGuid": "{BB939352-05B4-48C4-ADE4-9F83D9D68070}",
      "ProjectName": "AuthSystem",
      "ProjectType": 1,
      "RelativePath": "AuthSystem.csproj"
    }
  },
  "SolutionConfigurations": [
    {
      "ConfigurationName": "Debug",
      "FullName": "Debug|Any CPU",
      "PlatformName": "Any CPU"
    },
    {
      "ConfigurationName": "Release",
      "FullName": "Release|Any CPU",
      "PlatformName": "Any CPU"
    }
  ]
}O	 	U1  +ed84fd5a-4ee1-4489-9ddd-1dd46ff97f19BuildConfigurationRelease|Any CPUM	 	U1  'ed84fd5a-4ee1-4489-9ddd-1dd46ff97f19BuildConfigurationDebug|Any CPUk	 	U;Y  55b77c41-9751-433c-9d5f-5e815f152562IsDefaultStartupProject{
  "StartupProject": "AuthSystem"
}
   
≈ ›◊—À≈˚ıÔÈ„                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
		   N	 Ì¡°zY3Áœ∏ûàu[A(ˆ· ¥ñiH#Â∆îfA˝µ¢èXE2
Ó
€
£
q
4
		ÿ	¢	u	6˝ÀéR‹òN”¢q=’°k'Ù¨i+ÿèK	Â¿≠óÑk:Õõl= Õ               <g	System.Configuration.ConfigurationManager.dllÿ«ø˙õd0[ O	System.Composition.TypedParts.dllÿ«ø˙õd-Z I	System.Composition.Runtime.dllÿ«ø˙õd-Y I	System.Composition.Hosting.dllÿ«ø˙õd0X O	System.Composition.Convention.dllÿ«ø˙õd5W Y	System.Composition.AttributedModel.dllÿ«ø˙õd4V W	System.ComponentModel.Annotations.dllÿ«ø˙õd/U M	System.Collections.Immutable.dllÿ«ø˙õdT runtimesÿ«ø˙õdS ruÿ«ø˙õdR pt-BRÿ«ø˙õdQ plÿ«ø˙õd#P 5	NuGet.Frameworks.dllÿ«ø˙õd"O 3	Newtonsoft.Json.dllÿ«ø˙õd@N o	Microsoft.VisualStudio.Web.CodeGenerators.Mvc.dllÿ«ø˙õdBM s	Microsoft.VisualStudio.Web.CodeGeneration.Utils.dllÿ«ø˙õdGL }	Microsoft.VisualStudio.Web.CodeGeneration.Templating.dllÿ«ø˙õdQK Å	Microsoft.VisualStudio.Web.CodeGeneration.EntityFrameworkCore.dllÿ«ø˙õd<J g	Microsoft.VisualStudio.Web.CodeGeneration.dllÿ«ø˙õdAI q	Microsoft.VisualStudio.Web.CodeGeneration.Core.dllÿ«ø˙õdFH {	Microsoft.VisualStudio.Web.CodeGeneration.Contracts.dllÿ«ø˙õd1G Q	Microsoft.IdentityModel.Tokens.dllÿ«ø˙õdBF s	Microsoft.IdentityModel.Protocols.OpenIdConnect.dllÿ«ø˙õd4E W	Microsoft.IdentityModel.Protocols.dllÿ«ø˙õd2D S	Microsoft.IdentityModel.Logging.dllÿ«ø˙õd8C _	Microsoft.IdentityModel.JsonWebTokens.dllÿ«ø˙õd,B G	Microsoft.Identity.Client.dllÿ«ø˙õd2A S	Microsoft.Extensions.Primitives.dllÿ«ø˙õd/@ M	Microsoft.Extensions.Options.dllÿ«ø˙õd/? M	Microsoft.Extensions.Logging.dllÿ«ø˙õd<> g	Microsoft.Extensions.Logging.Abstractions.dllÿ«ø˙õd;= e	Microsoft.Extensions.DependencyInjection.dllÿ«ø˙õdH< 	Microsoft.Extensions.DependencyInjection.Abstractions.dllÿ«ø˙õdB; s	Microsoft.Extensions.Configuration.Abstractions.dllÿ«ø˙õd6: [	Microsoft.Extensions.Caching.Memory.dllÿ«ø˙õd<9 g	Microsoft.Extensions.Caching.Abstractions.dllÿ«ø˙õd:8 c	Microsoft.EntityFrameworkCore.SqlServer.dllÿ«ø˙õd;7 e	Microsoft.EntityFrameworkCore.Relational.dllÿ«ø˙õd06 O	Microsoft.EntityFrameworkCore.dllÿ«ø˙õd75 ]	Microsoft.EntityFrameworkCore.Design.dllÿ«ø˙õd=4 i	Microsoft.EntityFrameworkCore.Abstractions.dllÿ«ø˙õd+3 E	Microsoft.Data.SqlClient.dllÿ«ø˙õd42 W	Microsoft.CodeAnalysis.Workspaces.dllÿ«ø˙õd/1 M	Microsoft.CodeAnalysis.Razor.dllÿ«ø˙õd)0 A	Microsoft.CodeAnalysis.dllÿ«ø˙õd;/ e	Microsoft.CodeAnalysis.CSharp.Workspaces.dllÿ«ø˙õd0. O	Microsoft.CodeAnalysis.CSharp.dllÿ«ø˙õd6- [	Microsoft.AspNetCore.Razor.Language.dllÿ«ø˙õd, koÿ«ø˙õd+ jaÿ«ø˙õd* itÿ«ø˙õd) '	Humanizer.dllÿ«ø˙õd( frÿ«ø˙õd' esÿ«ø˙õd5& Y	dotnet-aspnet-codegenerator-design.dllÿ«ø˙õd% deÿ«ø˙õd$ csÿ«ø˙õdF# {	AutoMapper.Extensions.Microsoft.DependencyInjection.dllÿ«ø˙õd" )	AutoMapper.dllÿ«ø˙õd#! 5	AuthSystem.Views.pdbÿ«ø˙õd#  5	AuthSystem.Views.dllÿ«ø˙õd, G	AuthSystem.runtimeconfig.jsonÿ«ø˙õd0 O	AuthSystem.runtimeconfig.dev.jsonÿ«ø˙õd )	AuthSystem.pdbÿ«ø˙õd )	AuthSystem.exeÿ«ø˙õd )	AuthSystem.dllÿ«ø˙õd# 5	AuthSystem.deps.jsonÿ«ø˙õd -	appsettings.jsonÿ«ø˙õd+ E	appsettings.Development.jsonÿ«ø˙õd 'netcoreapp3.1ÿ«ø˙õd Debugÿ«ø˙õd  wwwrootÿ«ø˙õd  Viewsÿ«ø˙õd ! 	Startup.csÿ«ø˙õd  Servicesÿ«ø˙õd  	README.mdÿ«ø˙õd ! Propertiesÿ«ø˙õd ! 	Program.csÿ«ø˙õd  objÿ«ø˛õ&ö  Modelsÿ«ø˙õd ! Migrationsÿ«ø˙õd  Helpersÿ«ø˙õd
  Entitiesÿ«ø˙õd	 # Controllersÿ«ø˙õd  binÿ«ø˛q9w ) 	AuthSystem.slnÿ«¿4ãÑ+$ 9 	AuthSystem.csproj.userÿ«ø˙õd / 	AuthSystem.csprojÿ«¿sÓ% ; 	AuthorizationService.csÿ«ø˙õd - 	appsettings.jsonÿ«ø˙õd* E 	appsettings.Development.jsonÿ«ø˙õd  .vsÿ«ø˙õd¢ 8f ~YF0”ùf4÷§f»îi*ˇÁ´d/Ô≥l7˜ªt?ˇ√|G
À
Ñ
O
	”	å	W	€î_‚öd#Êûh'Í¢0ÔŸƒ´êw^H(˘„√¢sF Ï π                     ¢≠ M	Microsoft.Data.SqlClient.SNI.dll õÿ«ø˙õdÅ native éÿ«ø˙õd>Å i	System.Security.Cryptography.ProtectedData.dll óÿ«ø˙õd*Å A	System.Runtime.Caching.dll óÿ«ø˙õd,Å E	Microsoft.Data.SqlClient.dll ñÿ«ø˙õdÅ )netstandard2.0 ïÿ«ø˙õdÅ 'netcoreapp3.1 ïÿ«ø˙õdÅ lib çÿ«ø˙õd,Å E	Microsoft.Data.SqlClient.dll ìÿ«ø˙õdÅ 'netcoreapp3.1 íÿ«ø˙õdÅ lib åÿ«ø˙õdÅ win-x86Tÿ«ø˙õdÅ win-x64Tÿ«ø˙õdÅ win-arm64Tÿ«ø˙õdÅ win-armTÿ«ø˙õdÅ winTÿ«ø˙õdÅ unixTÿ«ø˙õd>Å k	Microsoft.CodeAnalysis.Workspaces.resources.dllSÿ«ø˙õd3Å
 U	Microsoft.CodeAnalysis.resources.dllSÿ«ø˙õd<\ g	System.Configuration.ConfigurationManager.dllÿ«ø˙õd0[ O	System.Composition.TypedParts.dllÿ«ø˙õd-Z I	System.Composition.Runtime.dllÿ«ø˙õd-Y I	System.Composition.Hosting.dllÿ«ø˙õd0X O	System.Composition.Convention.dllÿ«ø˙õd5W Y	System.Composition.AttributedModel.dllÿ«ø˙õd4V W	System.ComponentModel.Annotations.dllÿ«ø˙õd/U M	System.Collections.Immutable.dllÿ«ø˙õdT runtimesÿ«ø˙õdS ruÿ«ø˙õdR pt-BRÿ«ø˙õdQ plÿ«ø˙õd#P 5	NuGet.Frameworks.dllÿ«ø˙õd"O 3	Newtonsoft.Json.dllÿ«ø˙õd   ∆ y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dllSÿ«ø˙õd:Å c	Microsoft.CodeAnalysis.CSharp.resources.dllSÿ«ø˙õd>Å k	Microsoft.CodeAnalysis.Workspaces.resources.dllRÿ«ø˙õd3Å U	Microsoft.CodeAnalysis.resources.dllRÿ«ø˙õdEÅ y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dllRÿ«ø˙õd:Å c	Microsoft.CodeAnalysis.CSharp.resources.dllRÿ«ø˙õd>Å k	Microsoft.CodeAnalysis.Workspaces.resources.dllQÿ«ø˙õd3Å U	Microsoft.CodeAnalysis.resources.dllQÿ«ø˙õdEÅ y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dllQÿ«ø˙õd:Å  c	Microsoft.CodeAnalysis.CSharp.resources.dllQÿ«ø˙õd> k	Microsoft.CodeAnalysis.Workspaces.resources.dll,ÿ«ø˙õd3~ U	Microsoft.CodeAnalysis.resources.dll,ÿ«ø˙õdE} y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dll,ÿ«ø˙õd:| c	Microsoft.CodeAnalysis.CSharp.resources.dll,ÿ«ø˙õd>{ k	Microsoft.CodeAnalysis.Workspaces.resources.dll+ÿ«ø˙õd3z U	Microsoft.CodeAnalysis.resources.dll+ÿ«ø˙õdEy y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dll+ÿ«ø˙õd:x c	Microsoft.CodeAnalysis.CSharp.resources.dll+ÿ«ø˙õd>w k	Microsoft.CodeAnalysis.Workspaces.resources.dll*ÿ«ø˙õd3v U	Microsoft.CodeAnalysis.resources.dll*ÿ«ø˙õdEu y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dll*ÿ«ø˙õd:t c	Microsoft.CodeAnalysis.CSharp.resources.dll*ÿ«ø˙õd>s k	Microsoft.CodeAnalysis.Workspaces.resources.dll(ÿ«ø˙õd3r U	Microsoft.CodeAnalysis.resources.dll(ÿ«ø˙õdEq y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dll(ÿ«ø˙õd:p c	Microsoft.CodeAnalysis.CSharp.resources.dll(ÿ«ø˙õd>o k	Microsoft.CodeAnalysis.Workspaces.resources.dll'ÿ«ø˙õd3n U	Microsoft.CodeAnalysis.resources.dll'ÿ«ø˙õdEm y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dll'ÿ«ø˙õd:l c	Microsoft.CodeAnalysis.CSharp.resources.dll'ÿ«ø˙õd>k k	Microsoft.CodeAnalysis.Workspaces.resources.dll%ÿ«ø˙õd3j U	Microsoft.CodeAnalysis.resources.dll%ÿ«ø˙õdEi y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dll%ÿ«ø˙õd:h c	Microsoft.CodeAnalysis.CSharp.resources.dll%ÿ«ø˙õd>g k	Microsoft.CodeAnalysis.Workspaces.resources.dll$ÿ«ø˙õd3f U	Microsoft.CodeAnalysis.resources.dll$ÿ«ø˙õdEe y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dll$ÿ«ø˙õd:d c	Microsoft.CodeAnalysis.CSharp.resources.dll$ÿ«ø˙õdc zh-Hantÿ«ø˙õdb zh-Hansÿ«ø˙õda trÿ«ø˙õd=` i	System.Security.Cryptography.ProtectedData.dllÿ«ø˙õd)_ A	System.Runtime.Caching.dllÿ«ø˙õd2^ S	System.IdentityModel.Tokens.Jwt.dllÿ«ø˙õd6] [	System.Diagnostics.DiagnosticSource.dllÿ«ø˙õd
A x …íäb1˛’ßåkR3ÛﬂΩöÑmaT;Ï…ùqQ1#Û¡å]2
‚
∆
ï
z
e
N
9
	÷	¡	™	v	WN	,˚Õ•Å:;Íø§álO:¸‡◊≈™ãlI,Í≈©âiE/ ÁÕØñyh_TH2˙Ì‡”∆ôãv\C:'¯ﬂÀ∂°d[L2˙‰Õ≤ìlA              "AAuthSystem.AssemblyInfo.cs)/m ‚jquery.validate.unobtrusive.min.js&&Ijquery.validate.unobtrusive.js%9jquery.validate.min.js$1jquery.validate.js#)jquery.min.map'jquery.min.jsjquery.js%Gjquery-validation-/ AuthSystem.csproj) AuthSystem.sln'KAuthSystem.RazorAssemblyInfo.cs)1*QAuthSystem.RazorAssemblyInfo.cache)0%Index.cshtml Ó Û%Index.cshtml Ì Ú'Humanizer.dll)/HomeController.cs	 ¥Home › ﬂHome Ó Helpersfr(#favicon.ico ˘es'/ErrorViewModel.cs º/Error.cshtml.g.cs ‡ Ê%Error.cshtml Ô ı Entities
,Ydotnet-aspnet-codegenerator-design.dll&dist dist ˇdist ˛Debug ¡Debugde%"CDataContextModelSnapshot.cs ∫)DataContext.cs ∑css
css ¯cs$# Controllers	5bootstrap.min.js.map-bootstrap.min.js7bootstrap.min.css.map/bootstrap.min.css-bootstrap.js.map%bootstrap.js/bootstrap.css.map'bootstrap.css#Cbootstrap.bundle.min.js.map;bootstrap.bundle.min.js;bootstrap.bundle.js.map3bootstrap.bundle.js$Ebootstrap-reboot.min.css.map =bootstrap-reboot.min.css =bootstrap-reboot.css.map5bootstrap-reboot.css
"Abootstrap-grid.min.css.map	9bootstrap-grid.min.css9bootstrap-grid.css.map1bootstrap-grid.cssbootstrap ˚ ˛ bin5AutoMapperProfile.cs ∂={AutoMapper.Extensions.Microsoft.DependencyInjection.dll#)AutoMapper.dll"5AuthSystem.Views.pdb ƒ ⁄5AuthSystem.Views.pdb!5AuthSystem.Views.dll ƒ Ÿ5AuthSystem.Views.dll *QAuthSystem.TagHelpers.output.cache ƒ ÿ)OAuthSystem.TagHelpers.input.cache ƒ ◊&IAuthSystem.StaticWebAssets.xml ‹ Í1_AuthSystem.StaticWebAssets.Manifest.cache ‹ È AuthSystem.sln#GAuthSystem.runtimeconfig.json'OAuthSystem.runtimeconfig.dev.json-WAuthSystem.RazorTargetAssemblyInfo.cs ƒ ÷0]AuthSystem.RazorTargetAssemblyInfo.cache ƒ ’*QAuthSystem.RazorCoreGenerate.cache ƒ ‘'KAuthSystem.RazorAssemblyInfo.cs ƒ ”*QAuthSystem.RazorAssemblyInfo.cache ƒ “)AuthSystem.pdb ƒ —)AuthSystem.pdb8mAuthSystem.MvcApplicationPartsAssemblyInfo.cache ƒ –)OAuthSystem.genruntimeconfig.cache ƒ œ)AuthSystem.exe)AuthSystem.dll ƒ Œ)AuthSystem.dll5AuthSystem.deps.json0]AuthSystem.csprojAssemblyReference.cache ƒ Õ9 AuthSystem.csproj.user(OAuthSystem.csproj.nuget.g.targets ¿&KAuthSystem.csproj.nuget.g.props ø*SAuthSystem.csproj.nuget.dgspec.json æ.YAuthSystem.csproj.FileListAbsolute.txt ƒ Ã4gAuthSystem.csproj.EntityFrameworkCore.targets Ω1_AuthSystem.csproj.CoreCompileInputs.cache ƒ À&IAuthSystem.csproj.CopyComplete ƒ     AuthSystem.csproj;AuthSystem.assets.cache)*;AuthSystem.assets.cache ƒ …+SAuthSystem.AssemblyInfoInputs.cache)-+SAuthSystem.AssemblyInfoInputs.cache ƒ »"AAuthSystem.AssemblyInfo.cs ƒ «)AuthService.cs Ï; AuthorizationService.cs5AuthenticateModel.cs ª/AuthController.cs	 ≥Auth › ﬁAuth Ì-appsettings.json- appsettings.json"Eappsettings.Development.json!E appsettings.Development.json#apphost.exe ƒ ∆!?additional-methods.min.js"7additional-methods.js!9_ViewStart.cshtml.g.cs › ‚/_ViewStart.cshtml Ò =_ViewImports.cshtml.g.cs › ·3_ViewImports.cshtml -W_ValidationScriptsPartial.cshtml.g.cs ‡ Ë(M_ValidationScriptsPartial.cshtml Ô ˜3_Layout.cshtml.g.cs ‡ Á)_Layout.cshtml Ô ˆ0_20210202153706_LoginMigration.Designer.cs π'M20210202153706_LoginMigration.cs ∏ 	.vs6i.NETCoreApp,Version=v3.1.AssemblyAttributes.cs).6i.NETCoreApp,Version=v3.1.AssemblyAttributes.cs ƒ ≈
! T ˚tkbS9Î‘πÕ¶{Ø%πÅvj^NFYÏ ¯∆îb0—üm
£
p
=

	◊	§	q	4˜∫}@01Ûµw9˚⁄≥à]2‹±ÜZ.
÷ ˚S'Îµ}G€§m÷˘¬≥é	π	ë	]	/	‰∑ØÄ¶f≥õ[L;,éÄr                                 +UMicrosoft.CodeAnalysis.resources.dllb ≠+WMicrosoft.CodeAnalysis.Workspaces.dll2+UMicrosoft.CodeAnalysis.resources.dllc ±5kMicrosoft.CodeAnalysis.Workspaces.resources.dll'o5kMicrosoft.CodeAnalysis.Workspaces.resources.dll%k5kMicrosoft.CodeAnalysis.Workspaces.resources.dll$g≥ 
js<yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll,}6kMicrosoft.CodeAnalysis.Workspaces.resources.dllR á6kMicrosoft.CodeAnalysis.Workspaces.resources.dllQ É5kMicrosoft.CodeAnalysis.Workspaces.resources.dll,5kMicrosoft.CodeAnalysis.Workspaces.resources.dll+{5kMicrosoft.CodeAnalysis.Workspaces.resources.dll*w5kMicrosoft.CodeAnalysis.Workspaces.resources.dll(sú Uko,6kMicrosoft.CodeAnalysis.Workspaces.resources.dllc ≤6kMicrosoft.CodeAnalysis.Workspaces.resources.dllb Æ1cMicrosoft.CodeAnalysis.CSharp.resources.dll(p1cMicrosoft.CodeAnalysis.CSharp.resources.dll'l1cMicrosoft.CodeAnalysis.CSharp.resources.dll%h1cMicrosoft.CodeAnalysis.CSharp.resources.dll$d'OMicrosoft.CodeAnalysis.CSharp.dll.-[Microsoft.AspNetCore.Razor.Language.dll-LICENSE ˛lib ç ïlib å í
lib ˚3launchSettings.json Îo Microsoft.Data	js ˙1jquery.validate.js#)jquery.min.map'jquery.min.jsjquery.js%Gjquery-validation-unobtrusive ˚/jquery-validation ˚ jquery ˚ ˇja+it*/Index.cshtml.g.cs ﬂ ‰$EMicrosoft.Data.SqlClient.dll ì î"EMicrosoft.Data.SqlClient.dll36kMicrosoft.CodeAnalysis.Workspaces.resources.dlla ™6kMicrosoft.CodeAnalysis.Workspaces.resources.dllS ão!LICENSE.md  #LICENSE.txt ˇ1cMicrosoft.CodeAnalysis.CSharp.resources.dll,|1cMicrosoft.CodeAnalysis.CSharp.resources.dll+x1cMicrosoft.CodeAnalysis.CSharp.resources.dll*t<yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll+y<yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll*u<yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll(q<yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll'm<yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll%i<yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll$e2eMicrosoft.CodeAnalysis.CSharp.Workspaces.dll/2cMicrosoft.CodeAnalysis.CSharp.resources.dllc Ø2cMicrosoft.CodeAnalysis.CSharp.resources.dllb ´2cMicrosoft.CodeAnalysis.CSharp.resources.dlla ß2cMicrosoft.CodeAnalysis.CSharp.resources.dllS à2cMicrosoft.CodeAnalysis.CSharp.resources.dllR Ñ2cMicrosoft.CodeAnalysis.CSharp.resources.dllQ Ä+UMicrosoft.CodeAnalysis.resources.dlla ©+UMicrosoft.CodeAnalysis.resources.dllS ä+UMicrosoft.CodeAnalysis.resources.dllR Ü+UMicrosoft.CodeAnalysis.resources.dllQ Ç*UMicrosoft.CodeAnalysis.resources.dll,~*UMicrosoft.CodeAnalysis.resources.dll+z*UMicrosoft.CodeAnalysis.resources.dll*v*UMicrosoft.CodeAnalysis.resources.dll(r*UMicrosoft.CodeAnalysis.resources.dll'n*UMicrosoft.CodeAnalysis.resources.dll%j*UMicrosoft.CodeAnalysis.resources.dll$f&MMicrosoft.CodeAnalysis.Razor.dll1 AMicrosoft.CodeAnalysis.dll0=yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dllc ∞=yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dllb ¨=yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dlla ®=yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dllS â=yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dllR Ö=yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dllQ Å  Microsoft.Extensions.Options.dll@&MMicrosoft.Extensions.Logging.dll?3gMicrosoft.Extensions.Logging.Abstractions.dll>2eMicrosoft.Extensions.DependencyInjection.dll=?Microsoft.Extensions.DependencyInjection.Abstractions.dll<9sMicrosoft.Extensio*Qjquery.validate.unobtrusive.min.js&&Ijquery.validate.unobtrusive.js%9jquery.validate.min.js$#LICENSE.txt'
» . ÃN≈üp\CÚŸª§àmN=˚Ê—«Ω¶åp\<.Çˆ´DºçZ.‡πûpWD0
ˆ
¿
≠
ô
qí
Lm
$	ˆ	À	•	ÉZ	A	ˆŒµõÇhUˇ˜Ë–¥òx^@" Á ≠åybP:#Úÿ»¡∏Øõzsi^TJ@ˆﬂ»¡∞©ùìâr`N<% Ù›∫ÑlP,¸ÙÌ‘À¬π¨úã»_9	ŸAAuthSystem.AssemblyInfo.cs/3i.NETCoreApp,Version=v3.1.AssemblyAttributes.cs.(SAuthSystem.AssemblyInfoInputs.cache-;AuthSystem.assets.cache*	p|LICENSE.txt'/cMicrosoft.CodeAnalysis.CSharp.resources.dllh/cMicrosoft.CodeAnalysis.CSharp.resources.dlld%OMicrosoft.CodeAnalysis.CSharp.dll.+[Microsoft.AspNetCore.Razor.Language.dll-  /LICENSE.txt!LICENSE.md LICENSElib ˚lib ïlib í3launchSettings.json Îko,jsjs ˙'Qjquery.validate.unobtrusive.min.js&#Ijquery.validate.unob/AuthSystem.csproj)AuthSystem.sln$KAuthSystem.RazorAssemblyInfo.cs1'QAuthSystem.RazorAssemblyInfo.cache0"Gjquery-validation-unobtrusive/jquery-validation jquery ˇja+it*/Index.cshtml.g.cs ‰/Index.cshtml.g.cs „%Index.cshtml Û%Index.cshtml Ú'Humanizer.dll)/HomeController.cs ¥	Home Ó	Home ﬂHelpersfr(#favicon.ico ˘es'/ErrorViewModel.cs º/Error.cshtml.g.cs Ê%Error.cshtml ıEntities
*Ydotnet-aspnet-codegenerator-design.dll&	dist	dist	dist
Debug ¡	Debugde% CDataContextModelSnapshot.cs ∫)DataContext.cs ∑csscss ¯cs$#Controllers	5bootstrap.min.js.map-bootstrap.min.js7bootstrap.min.css.map/bootstrap.min.css-bootstrap.js.map%bootstrap.js/bootstrap.css.map'bootstrap.css Cbootstrap.bundle.min.js.map;bootstrap.bundle.min.js;bootstrap.bundle.js.map3bootstrap.bundle.js!Ebootstrap-reboot.min.css.map=bootstrap-reboot.min.css=bootstrap-reboot.css.map5bootstrap-reboot.css
Abootstrap-grid.min.css.map	9bootstrap-grid.min.css9bootstrap-grid.css.map1bootstrap-grid.cssbootstrap ˛bin5AutoMapperProfile.cs ∂;{AutoMapper.Extensions.Microsoft.DependencyInjection.dll#)AutoMapper.dll"5AuthSystem.Views.pdb ⁄5AuthSystem.Views.pdb!5AuthSystem.Views.dll Ÿ5AuthSystem.Views.dll 'QAuthSystem.TagHelpers.output.cache ÿ&OAuthSystem.TagHelpers.input.cache ◊#IAuthSystem.StaticWebAssets.xml Í._AuthSystem.StaticWebAssets.Manifest.cache È‡ AuthSystem.sln!GAuthSystem.runtimeconfig.json%OAuthSystem.runtimeconfig.dev.json*WAuthSystem.RazorTargetAssemblyInfo.cs ÷-]AuthSystem.RazorTargetAssemblyInfo.cache ’'QAuthSystem.RazorCoreGenerate.cache ‘$KAuthSystem.RazorAssemblyInfo.cs ”'QAuthSystem.RazorAssemblyInfo.cache “)AuthSystem.pdb —)AuthSystem.pdb5mAuthSystem.MvcApplicationPartsAssemblyInfo.cache –&OAuthSystem.genruntimeconfig.cache œ)AuthSystem.exe)AuthSystem.dll Œ)AuthSystem.dll5AuthSystem.deps.json-]AuthSystem.csprojAssemblyReference.cache Õ9AuthSystem.csproj.user&OAuthSystem.csproj.nuget.g.targets ¿$KAuthSystem.csproj.nuget.g.props ø(SAuthSystem.csproj.nuget.dgspec.json æ+YAuthSystem.csproj.FileListAbsolute.txt Ã2gAuthSystem.csproj.EntityFrameworkCore.targets Ω._AuthSystem.csproj.CoreCompileInputs.cache À#IAuthSystem.csproj.CopyComplete     AuthSystem.csproj;AuthSystem.assets.cache …(SAuthSystem.AssemblyInfoInputs.cache »AAuthSystem.AssemblyInfo.cs «)AuthService.cs Ï;AuthorizationService.cs5AuthenticateModel.cs ª/AuthController.cs ≥	Auth Ì	Auth ﬁ-appsettings.json-appsettings.json Eappsettings.Development.json Eappsettings.Development.json#apphost.exe ∆?additional-methods.min.js"7additional-methods.js!9_ViewStart.cshtml.g.cs ‚/_ViewStart.cshtml Ò=_ViewImports.cshtml.g.cs ·3_ViewImports.cshtml *W_ValidationScriptsPartial.cshtml.g.cs Ë%M_ValidationScriptsPartial.cshtml ˜3_Layout.cshtml.g.cs Á)_Layout.cshtml ˆ._20210202153706_LoginMigration.Designer.cs π%M20210202153706_LoginMigration.cs ∏	.vs3i.NETCoreApp,Version=v3.1.AssemblyAttributes.cs ≈
" Q ¯'ƒtX4¸ı‹” ¡¥§ìÇVÌΩç
€
´
{
K
	È	∏	á	V	%Ùπ~Cÿ-Ú∑{?«ãO:*ÿØÜ]4 ¯ÉY+◊≠çY%ÒΩâU7ÕòcB ˛ÿ≤å
®
õ"
å9
g
=
	Ï	…	¶	Ä	N	"˙€–®ú°ió.`SD7*ãs              )UMicrosoft.CodeAnalysis.resources.dll ÇH S'jquery.min.jsAMicrosoft.CodeAnalysis.dll0)UMicrosoft.CodeAnalysis.resources.dll ä)UMicrosoft.CodeAnalysis.resources.dll Ü)WMicrosoft.CodeAnalysis.Workspaces.dll2)UMicrosoft.CodeAnalysis.resources.dll ±)UMicrosoft.CodeAnalysis.resources.dll ≠)UMicrosoft.CodeAnalysis.resources.dll ©3kMicrosoft.CodeAnalysis.Workspaces.resources.dll3kMicrosoft.CodeAnalysis.Workspaces.resources.dll{3kMicrosoft.CodeAnalysis.Workspaces.resources.dllw3kMicrosoft.CodeAnalysis.Workspaces.resources.dlls3kMicrosoft.CodeAnalysis.Workspaces.resources.dllo3kMicrosoft.CodeAnalysis.Workspaces.resources.dllk3kMicrosoft.CodeAnalysis.Workspaces.resources.dllgH )jquery.min.map:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dllq4kMicrosoft.CodeAnalysis.Workspaces.resources.dll ≤l Microsoft.+[Microsoft.AspNetCore.Razor.Language.dll-#LICENSE.txt'#LICENSE.txt!LICENSE.md LICENSElib ˚lib ïlib í3launchSettings.json Îko,jsjs ˙'Qjquery.validate.unobtrusive.min.js&#Ijquery.validate.unobtrusive.js%9jquery.validate.min.js$1jquery.validate.js#%MMicrosoft.Data.SqlClient.SNI.dll ¢%MMicrosoft.Data.SqlClient.SNI.dll ü%MMicrosoft.Data.SqlClient.SNI.dll ú!EMicrosoft.Data.SqlClient.dll ò!EMicrosoft.Data.SqlClient.dll î EMicrosoft.Data.SqlClient.dll34kMicrosoft.CodeAnalysis.Workspaces.resources.dll Æ4kMicrosoft.CodeAnalysis.Workspaces.resources.dll ™4kMicrosoft.CodeAnalysis.Workspaces.resources.dll ã4kMicrosoft.CodeAnalysis.Workspaces.resources.dll á4kMicrosoft.CodeAnalysis.Workspaces.resources.dll Éh !native §native °nativ/cMicrosoft.CodeAnalysis.CSharp.resources.dlll/cMicrosoft.CodeAnalysis.CSharp.resources.dllh/cMicrosoft.CodeAnalysis.CSharp.resources.dlld%OMicrosoft.CodeAnalysis.CSharp.dll.:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dllm:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dlli:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dlle0eMicrosoft.CodeAnalysis.CSharp.Workspaces.dll/0cMicrosoft.CodeAnalysis.CSharp.resources.dll Ø0cMicrosoft.CodeAnalysis.CSharp.resources.dll ´0cMicrosoft.CodeAnalysis.CSharp.resources.dll ß0cMicrosoft.CodeAnalysis.CSharp.resources.dll à0cMicrosoft.CodeAnalysis.CSharp.resources.dll Ñ0cMicrosoft.CodeAnalysis.CSharp.resources.dll Ä/cMicrosoft.CodeAnalysis.CSharp.resources.dll|/cMicrosoft.CodeAnalysis.CSharp.resources.dllx/cMicrosoft.CodeAnalysis.CSharp.resources.dllt/cMicrosoft.CodeAnalysis.CSharp.resources.dllp(UMicrosoft.CodeAnalysis.resources.dll~(UMicrosoft.CodeAnalysis.resources.dllz(UMicrosoft.CodeAnalysis.resources.dllv(UMicrosoft.CodeAnalysis.resources.dllr(UMicrosoft.CodeAnalysis.resources.dlln(UMicrosoft.CodeAnalysis.resources.dllj(UMicrosoft.CodeAnalysis.resources.dllf$MMicrosoft.CodeAnalysis.Razor.dll1;yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll ∞;yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll ¨;yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll ®;yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll â;yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll Ö;yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll Å:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dll}:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dlly:yMicrosoft.CodeAnalysis.CSharp.Workspaces.resources.dllu  òMicrosoft.Extensions.Logging.Abstractions.dll>0eMicrosoft.Extensions.DependencyInjection.dll==Microsoft.Extensions.DependencyInjection.Abstractions.dll<7sMicrosoft.Extensions.Configuration.Abstractions.dll;+[Microsoft.Extensions.Caching.Memory.dll:1gMicrosoft.Extensions.Caching.Abstractions.dll9/cMicrosoft.EntityFrameworkCore.SqlServer.dll80eMicrosoft.EntityFrameworkCore.Relational.dll7   A| Æq)Û≤úánS:!Îº¶Üe6	»Ø|Õ¥ÅN5œ∂ÉPÀïTœôX”ù\9
˝
◊
∑
Ö
J
	˜	‘	ï	`	/¸Â¿õ{:Ô∆ØñkB˙‘∞äRÂ¿†ät\7 ı ÷                                   %	Index.cshtml Óÿ«ø˙õdÅr %	Index.cshtml Ìÿ«ø˙õd Åq /	_ViewStart.cshtmlÿ«ø˙õd"Åp 3	_ViewImports.cshtmlÿ«ø˙õdÅo Sharedÿ«ø˙õdÅn Homeÿ«ø˙õdÅm Authÿ«ø˙õdÅl )	AuthService.csÿ«ø˙õd"Åk 3	launchSettings.jsonÿ«ø˙õd.Åj I	AuthSystem.StaticWebAssets.xml ‹ÿ«ø˙õd9Åi _	AuthSystem.StaticWebAssets.Manifest.cache ‹ÿ«ø˙õd5Åh W	_ValidationScriptsPartial.cshtml.g.cs ‡ÿ«ø˙õd#Åg 3	_Layout.cshtml.g.cs ‡ÿ«ø˙õd!Åf /	Error.cshtml.g.cs ‡ÿ«ø˙õd#Åe 3	Privacy.cshtml.g.cs ﬂÿ«ø˙õd!Åd /	Index.cshtml.g.cs ﬂÿ«ø˙õd!Åc /	Index.cshtml.g.cs ﬁÿ«ø˙õd&Åb 9	_ViewStart.cshtml.g.cs ›ÿ«ø˙õd(Åa =	_ViewImports.cshtml.g.cs ›ÿ«ø˙õdÅ` Shared ›ÿ«ø˙õdÅ_ Home ›ÿ«ø˙õdÅ^ Auth ›ÿ«ø˙õdÅ] Views €ÿ«ø˙õdÅ\ +staticwebassets ƒÿ«ø˙õdÅ[ Razor ƒÿ«ø˙õd$ÅZ 5	AuthSystem.Views.pdb ƒÿ«ø˙õd$ÅY 5	AuthSystem.Views.dll ƒÿ«ø˙õ0Å M	Microsoft.Data.SqlClient.SNI.dll õÿ«ø˙õdÅ native éÿ«ø˙õd>Å i	System.Security.Cryptography.ProtectedData.dll óÿ«ø˙õd*Å A	System.Runtime.Caching.dll óÿ«ø˙õd,Å E	Microsoft.Data.SqlClient.dll ñÿ«ø˙õdÅ )netstandard2.0 ïÿ«ø˙õdÅ 'netcoreapp3.1 ïÿ«ø˙õdÅ lib çÿ«ø˙õd,Å E	Microsoft.Data.SqlClient.dll ìÿ«ø˙õdÅ 'netcoreapp3.1 íÿ«ø˙õdÅ lib åÿ«ø˙õdÅ win-x86Tÿ«ø˙õdÅ win-x64Tÿ«ø˙õdÅ win-arm64Tÿ«ø˙õdÅ win-armTÿ«ø˙õdÅ winTÿ«ø˙õdÅ unixTÿ«ø˙õd>Å k	Microsoft.CodeAnalysis.Workspaces.resources.dllSÿ«ø˙õd3Å
 U	Microsoft.CodeAnalysis.resources.dllSÿ«ø˙õdEÅ	 y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dllSÿ«ø˙õd:Å c	Microsoft.CodeAnalysis.CSharp.resources.dllSÿ«ø˙õd>Å k	Microsoft.CodeAnalysis.Workspaces.resources.dllRÿ«ø˙õd*ÅG A	AuthSystem.AssemblyInfo.cs ƒÿ«ø˙õdÅF #	apphost.exe ƒÿ«ø˙õd>ÅE i	.NETCoreApp,Version=v3.1.AssemblyAttributes.cs ƒÿ«ø˙õdÅD 'netcoreapp3.1 ¡ÿ«ø˙õd"ÅC 3	project.nuget.cacheÿ«ø˙õd"ÅB 3	project.assets.jsonÿ«ø˙õdÅA Debugÿ«ø˙õd0Å@ O	AuthSystem.csproj.nuget.g.targetsÿ«ø˙õd.Å? K	AuthSystem.csproj.nuget.g.propsÿ«ø˙õd2Å> S	AuthSystem.csproj.nuget.dgspec.jsonÿ«ø˙õd<Å= g	AuthSystem.csproj.EntityFrameworkCore.targetsÿ«ø˙õd Å< /	ErrorViewModel.csÿ«ø˙õd#Å; 5	AuthenticateModel.csÿ«ø˙õd*Å: C	DataContextModelSnapshot.csÿ«ø˙õd8Å9 _	20210202153706_LoginMigration.Designer.csÿ«ø˙õd/Å8 M	20210202153706_LoginMigration.csÿ«ø˙õdÅ7 )	DataContext.csÿ«ø˙õd#Å6 5	AutoMapperProfile.csÿ«ø˙õdÅ5 	User.cs
ÿ«ø˙õd Å4 /	HomeController.cs	ÿ«ø˙õd Å3 /	AuthController.cs	ÿ«ø˙õd>Å2 k	Microsoft.CodeAnalysis.Workspaces.resources.dllcÿ«ø˙õd3Å1 U	Microsoft.CodeAnalysis.resources.dllcÿ«ø˙õdEÅ0 y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dllcÿ«ø˙õd:Å/ c	Microsoft.CodeAnalysis.CSharp.resources.dllcÿ«ø˙õd>Å. k	Microsoft.CodeAnalysis.Workspaces.resources.dllbÿ«ø˙õd3Å- U	Microsoft.CodeAnalysis.resources.dllbÿ«ø˙õdEÅ, y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dllbÿ«ø˙õd:Å+ c	Microsoft.CodeAnalysis.CSharp.resources.dllbÿ«ø˙õd>Å* k	Microsoft.CodeAnalysis.Workspaces.resources.dllaÿ«ø˙õd3Å) U	Microsoft.CodeAnalysis.resources.dllaÿ«ø˙õdEÅ( y	Microsoft.CodeAnalysis.CSharp.Workspaces.resources.dllaÿ«ø˙õd:Å' c	Microsoft.CodeAnalysis.CSharp.resources.dllaÿ«ø˙õd0Å& M	Microsoft.Data.SqlClient.SNI.pdb §ÿ«ø˙õd0Å% M	Microsoft.Data.SqlClient.SNI.dll §ÿ«ø˙õdÅ$ native ëÿ«ø˙õd0Å# M	Microsoft.Data.SqlClient.SNI.pdb °ÿ«ø˙õd0Å" M	Microsoft.Data.SqlClient.SNI.dll °ÿ«ø˙õdÅ! native êÿ«ø˙õd0Å  M	Microsoft.Data.SqlClient.SNI.pdb ûÿ«ø˙õd0Å M	Microsoft.Data.SqlClient.SNI.dll ûÿ«ø˙õdÅ native èÿ«ø˙õd0Å M	Microsoft.Data.SqlClient.SNI.pdb õÿ«ø˙õd
   c¡ ée<Í¡O&Ò¬ög5—óW$…¢x‹¨ÇVÛµ|Hˇ¿ÜN>2#ˆ‚Ã∂†‹∑âoTKB E2¸Ï‡ñ—ÕÚ»π´7aˇõ~tH
Û
Œ
©
Å
M
	ı	‘	±	|	E	<	0	!	p	¸Î‹Õ¿≤§                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   (MMicrosoft.Data.SqlClient.SNI.pdb û †(MMicrosoft.Data.SqlClient.SNI.pdb õ ù(MMicrosoft.Data.SqlClient.SNI.dll § •(MMicrosoft.Data.SqlClient.SNI.dll ° ¢(MMicrosoft.Data.SqlClient.SNI.dll û ü(MMicrosoft.Data.SqlClient.SNI.dll õ ú'netcoreapp3.1+,Release+'netcoreapp3.1()Release(3gMicrosoft.Extensions.Caching.Abstractions.dll91cMicrosoft.EntityFrameworkCore.SqlServer.dll82eMicrosoft.EntityFrameworkCore.Relational.dll7'OMicrosoft.EntityFrameworkCore.dll6.]Microsoft.EntityFrameworkCore.Design.dll54iMicrosoft.EntityFrameworkCore.Abstractions.dll4(MMicrosoft.Data.SqlClient.SNI.pdb § ¶(MMicrosoft.Data.SqlClient.SNI.pdb ° £)SMicrosoft.Extensions.Primitives.dllA&MMicrosoft.Extensions.Options.dll@&MMicrosoft.Extensions.Logging.dll?3gMicrosoft.Extensions.Logging.Abstractions.dll>2eMicrosoft.Extensions.DependencyInjection.dll=?Microsoft.Extensions.DependencyInjection.Abstractions.dll<9sMicrosoft.Extensions.Configuration.Abstractions.dll;-[Microsoft.Extensions.Caching.Memory.dll:site.js ˙ ˝site.css ¯ ¸)Privacy.cshtml Ó ÙShared Ô3Privacy.cshtml.g.cs ﬂ ÂShared › ‡Views € ›+staticwebassets ƒ ‹Razor ƒ €zh-Hantczh-Hansb wwwrootwin-x86T ëwin-x64T êwin-arm64T èwin-armT é
winT ç
 ViewsUser.cs
 µunixT åtra6iSystem.Security.Cryptography.ProtectedData.dll ó ö4iSystem.Security.Cryptography.ProtectedData.dll`"ASystem.Runtime.Caching.dll ó ô ASystem.Runtime.Caching.dll_)SSystem.IdentityModel.Tokens.Jwt.dll^-[System.Diagnostics.DiagnosticSource.dll]3gSystem.Configuration.ConfigurationManager.dll\'OSystem.Composition.TypedParts.dll[$ISystem.Composition.Runtime.dllZ$ISystem.Composition.Hosting.dllY'OSystem.Composition.Convention.dllX,YSystem.Composition.AttributedModel.dllW+WSystem.ComponentModel.Annotations.dllV&MSystem.Collections.Immutable.dllU! Startup.cs ServicesruntimesTruS README.mdpt-BRR! Properties3project.nuget.cache √3project.assets.json ¬! Program.csplQ obj5NuGet.Frameworks.dllP3Newtonsoft.Json.dllO)netstandard2.0 ï ó'netcoreapp3.1 ¡ ƒ'netcoreapp3.1 ï ñ'netcoreapp3.1 í ì'netcoreapp3.1native ë §native ê °native è ûnative é õ Models! Migrations7oMicrosoft.VisualStudio.Web.CodeGenerators.Mvc.dllN9sMicrosoft.VisualStudio.Web.CodeGeneration.Utils.dllM>}Microsoft.VisualStudio.Web.CodeGeneration.Templating.dllLHÅMicrosoft.VisualStudio.Web.CodeGeneration.EntityFrameworkCore.dllK3gMicrosoft.VisualStudio.Web.CodeGeneration.dllJ8qMicrosoft.VisualStudio.Web.CodeGeneration.Core.dllI={Microsoft.VisualStudio.Web.CodeGeneration.Contracts.dllH(QMicrosoft.IdentityModel.Tokens.dllG9sMicrosoft.IdentityModel.Protocols.OpenIdConnect.dllF+WMicrosoft.IdentityModel.Protocols.dllE)SMicrosoft.IdentityModel.Logging.dllD/_Microsoft.IdentityModel.JsonWebTokens.dllC#GMicrosoft.Identity.Client.dllB   f €±ÄD–Ø{8‚∞{@‘üxQ9
ˇ
Ë
—
∏
ç
d
@
	ˆ	“	¨	t	8	‚¬¨ñ~Y6¯ﬂ¿ülW:&›√ßéj:#	Ûﬁπêg:ËΩénJ&˛ÿÆÑV7Ò ≥ïyY8!‹∞ãb1¸ﬁ≈•{bB                                                        3Ç- S	AuthSystem.AssemblyInfoInputs.cache)ÿ«ø˛ç’ºÇ, 'netcoreapp3.1+ÿ«ø˛q9wÇ+ Releaseÿ«ø˛q9w'Ç* ;	AuthSystem.assets.cache)ÿ«ø˛aå¬Ç) 'netcoreapp3.1(ÿ«ø˛õ&öÇ( Releaseÿ«ø˛õ&öÇ' #	LICENSE.txtÿ«ø˙õd2Ç& Q	jquery.validate.unobtrusive.min.jsÿ«ø˙õd.Ç% I	jquery.validate.unobtrusive.jsÿ«ø˙õd&Ç$ 9	jquery.validate.min.jsÿ«ø˙õd"Ç# 1	jquery.validate.jsÿ«ø˙õd)Ç" ?	additional-methods.min.jsÿ«ø˙õd%Ç! 7	additional-methods.jsÿ«ø˙õdÇ  !	LICENSE.md ÿ«ø˙õdÇ dist ÿ«ø˙õdÇ )	jquery.min.mapÿ«ø˙õdÇ '	jquery.min.jsÿ«ø˙õdÇ 	jquery.jsÿ«ø˙õdÇ #	LICENSE.txt ˇÿ«ø˙õdÇ dist ˇÿ«ø˙õd$Ç 5	bootstrap.min.js.mapÿ«ø˙õd Ç -	bootstrap.min.jsÿ«ø˙õd Ç -	bootstrap.js.mapÿ«ø˙õdÇ %	bootstrap.jsÿ«ø˙õd+Ç C	bootstrap.bundle.min.js.mapÿ«ø˙õd'Ç ;	bootstrap.bundle.min.jsÿ«ø˙õd'Ç ;	bootstrap.bundle.js.mapÿ«ø˙õd#Ç 3	bootstrap.bundle.jsÿ«ø˙õd%Ç 7	bootstrap.min.css.mapÿ«ø˙õd!Ç /	bootstrap.min.cssÿ«ø˙õd!Ç /	bootstrap.css.mapÿ«ø˙õdÇ '	bootstrap.cssÿ«ø˙õd,Ç E	bootstrap-reboot.min.css.mapÿ«ø˙õd(Ç =	bootstrap-reboot.min.cssÿ«ø˙õd(Ç =	bootstrap-reboot.css.mapÿ«ø˙õd$Ç
 5	bootstrap-reboot.cssÿ«ø˙õd*Ç	 A	bootstrap-grid.min.css.mapÿ«ø˙õd&Ç 9	bootstrap-grid.min.cssÿ«ø˙õd&Ç 9	bootstrap-grid.css.mapÿ«ø˙õd"Ç 1	bootstrap-grid.cssÿ«ø˙õdÇ jsÿ«ø˙õdÇ cssÿ«ø˙õdÇ 	LICENSE ˛ÿ«ø˙õdÇ dist ˛ÿ«ø˙õd-Ç Gjquery-validation-unobtrusive ˚ÿ«ø˙õd!Ç  /jquery-validation ˚ÿ«ø˙õdÅ jquery ˚ÿ«ø˙õdÅ~ bootstrap ˚ÿ«ø˙õdÅ} 	site.js ˙ÿ«ø˙õdÅ| 	site.css ¯ÿ«ø˙õdÅs %	Index.cshtml Óÿ«ø˙õdÅr %	Index.cshtml Ìÿ«ø˙õd Åq /	_ViewStart.cshtmlÿ«ø˙õd"Åp 3	_ViewImports.cshtmlÿ«ø˙õdÅo Sharedÿ«ø˙õdÅn Homeÿ«ø˙õdÅm Authÿ«ø˙õdÅl )	AuthService.csÿ«ø˙õd"Åk 3	launchSettings.jsonÿ«ø˙õd.Åj I	AuthSystem.StaticWebAssets.xml ‹ÿ«ø˙õd9Åi _	AuthSystem.StaticWebAssets.Manifest.cache ‹ÿ«ø˙õd5Åh W	_ValidationScriptsPartial.cshtml.g.cs ‡ÿ«ø˙õd#Åg 3	_Layout.cshtml.g.cs ‡ÿ«ø˙õd!Åf /	Error.cshtml.g.cs ‡ÿ«ø˙õd#Åe 3	Privacy.cshtml.g.cs ﬂÿ«ø˙õd!Åd /	Index.cshtml.g.cs ﬂÿ«ø˙õd!Åc /	Index.cshtml.g.cs ﬁÿ«ø˙õd&Åb 9	_ViewStart.cshtml.g.cs ›ÿ«ø˙õd(Åa =	_ViewImports.cshtml.g.cs ›ÿ«ø˙õdÅ` Shared ›ÿ«ø˙õdÅ_ Home ›ÿ«ø˙õdÅ^ Auth ›ÿ«ø˙õdÅ] Views €ÿ«ø˙õdÅ\ +staticwebassets ƒÿ«ø˙õdÅ[ Razor ƒÿ«ø˙õd$ÅZ 5	AuthSystem.Views.pdb ƒÿ«ø˙õd$ÅY 5	AuthSystem.Views.dll ƒÿ«ø˙õd2ÅX Q	AuthSystem.TagHelpers.output.cache ƒÿ«ø˙õd1ÅW O	AuthSystem.TagHelpers.input.cache ƒÿ«ø˙õd5ÅV W	AuthSystem.RazorTargetAssemblyInfo.cs ƒÿ«ø˙õd8ÅU ]	AuthSystem.RazorTargetAssemblyInfo.cache ƒÿ«ø˙õd2ÅT Q	AuthSystem.RazorCoreGenerate.cache ƒÿ«ø˙õd/ÅS K	AuthSystem.RazorAssemblyInfo.cs ƒÿ«ø˙õd2ÅR Q	AuthSystem.RazorAssemblyInfo.cache ƒÿ«ø˙õdÅQ )	AuthSystem.pdb ƒÿ«ø˙õd@ÅP m	AuthSystem.MvcApplicationPartsAssemblyInfo.cache ƒÿ«ø˙õd1ÅO O	AuthSystem.genruntimeconfig.cache ƒÿ«ø˙õdÅN )	AuthSystem.dll ƒÿ«ø˙õd8ÅM ]	AuthSystem.csprojAssemblyReference.cache ƒÿ«ø˙õd6ÅL Y	AuthSystem.csproj.FileListAbsolute.txt ƒÿ«ø˙õd9ÅK _	AuthSystem.csproj.CoreCompileInputs.cache ƒÿ«ø˙õd.ÅJ I	AuthSystem.csproj.CopyComplete ƒÿ«ø˙õd'ÅI ;	AuthSystem.assets.cache ƒÿ«ø˙õd3ÅH S	AuthSystem.AssemblyInfoInputs.cache ƒÿ«ø˙õdÅ{ libÿ«ø˙õdÅz jsÿ«ø˙õdÅy #	favicon.icoÿ«ø˙õdÅx cssÿ«ø˙õd0Åw M	_ValidationScriptsPartial.cshtml Ôÿ«ø˙õdÅv )	_Layout.cshtml Ôÿ«ø˙õdÅu %	Error.cshtml Ôÿ«ø˙õdÅt )	Privacy.cshtml Óÿ«ø˙õd
   _1 )›∑ÑW1ÎπçUÊ¥è€≥ëc;Ÿ≤v?∆âQıÈ›—ø¨ôÜoOrZA92gá#
Ò‚ÿÕøÇb∏´ûí{YLÉnI
Ù
Œ
´
à
b
0
	‹	Ω	ù	j	6	/	%			˙Ìﬁ—ƒ∏¨†                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           %OMicrosoft.EntityFrameworkCore.dll6,]Microsoft.EntityFrameworkCore.Design.dll52iMicrosoft.EntityFrameworkCore.Abstractions.dll4%MMicrosoft.Data.SqlClient.SNI.pdb ¶%MMicrosoft.Data.SqlClient.SNI.pdb £%MMicrosoft.Data.SqlClient.SNI.pdb †%MMicrosoft.Data.SqlClient.SNI.pdb ù'netcoreapp3.1,Release+'netcoreapp3.1)Release($MMicrosoft.Extensions.Logging.dll?1gMicrosoft.Extensions.Logging.Abstractions.dll>0eMicrosoft.Extensions.DependencyInjection.dll==Microsoft.Extensions.DependencyInjection.Abstractions.dll<7sMicrosoft.Extensions.Configuration.Abstractions.dll;+[Microsoft.Extensions.Caching.Memory.dll:1gMicrosoft.Extensions.Caching.Abstractions.dll9/cMicrosoft.EntityFrameworkCore.SqlServer.dll80eMicrosoft.EntityFrameworkCore.Relational.dll7site.js ˝site.css ¸)Privacy.cshtml ÙShared Ô3Privacy.cshtml.g.cs Âzh-Hantczh-Hansbwwwrootwin-x86 ëwin-x64 êwin-arm64 èwin-arm éwin ç
Views ›	ViewsUser.cs µ	unix åtra3iSystem.Security.Cryptography.ProtectedData.dll ö2iSystem.Security.Cryptography.ProtectedData.dll`ASystem.Runtime.Caching.dll ôASystem.Runtime.Caching.dll_'SSystem.IdentityModel.Tokens.Jwt.dll^+[System.Diagnostics.DiagnosticSource.dll]1gSystem.Configuration.ConfigurationManager.dll\%OSystem.Composition.TypedParts.dll["ISystem.Composition.Runtime.dllZ"ISystem.Composition.Hosting.dllY%OSystem.Composition.Convention.dllX*YSystem.Composition.AttributedModel.dllW)WSystem.ComponentModel.Annotations.dllV$MSystem.Collections.Immutable.dllU+staticwebassets ‹!Startup.csShared ‡ServicesruntimesTruSREADME.md
Razor €	pt-BRR!Properties3project.nuget.cache √3project.assets.json ¬!Program.csplQobj5NuGet.Frameworks.dllP3Newtonsoft.Json.dllO)netstandard2.0 ó'netcoreapp3.1 ƒ'netcoreapp3.1 ñ'netcoreapp3.1 ì'netcoreapp3.1native §native °native ûnative õ
Models!Migrations5oMicrosoft.VisualStudio.Web.CodeGenerators.Mvc.dllN7sMicrosoft.VisualStudio.Web.CodeGeneration.Utils.dllM<}Microsoft.VisualStudio.Web.CodeGeneration.Templating.dllLFÅMicrosoft.VisualStudio.Web.CodeGeneration.EntityFrameworkCore.dllK1gMicrosoft.VisualStudio.Web.CodeGeneration.dllJ6qMicrosoft.VisualStudio.Web.CodeGeneration.Core.dllI;{Microsoft.VisualStudio.Web.CodeGeneration.Contracts.dllH&QMicrosoft.IdentityModel.Tokens.dllG7sMicrosoft.IdentityModel.Protocols.OpenIdConnect.dllF)WMicrosoft.IdentityModel.Protocols.dllE'SMicrosoft.IdentityModel.Logging.dllD-_Microsoft.IdentityModel.JsonWebTokens.dllC!GMicrosoft.Identity.Client.dllB'SMicrosoft.Extensions.Primitives.dllA$MMicrosoft.Extensions.Options.dll@   ? © —≠i+ÁóC±yL‡•j5ÚØäa5
Ô
π
s
N
%	Û	µ	o	9	…{4Ë≠o+‰êN∆äFÓ∫u/È≠Uˇ√ÄD–ëL ˇ — ©                                   &?
 ##	RestoreToolRestoreTool ø,>
 ))	RestoreSuccessRestoreSuccess øK=
 'i	ShowRequestIdAuthSystem.Models.ErrorViewModel.ShowRequestId º	C<
 a	RequestIdAuthSystem.Models.ErrorViewModel.RequestId º=;
 )M		ErrorViewModelAuthSystem.Models.ErrorViewModel º2:
 //AuthSystem.ModelsAuthSystem.Models º>9
 _DownAuthSystem.Migrations.LoginMigration.Down	 ∏!:8
 [UpAuthSystem.Migrations.LoginMigration.Up	 ∏!A7
 )U		LoginMigrationAuthSystem.Migrations.LoginMigration ∏:6
 77AuthSystem.MigrationsAuthSystem.Migrations ∏T5
 !BuildModelAuthSystem.Migrations.DataContextModelSnapshot.BuildModel	 ∫!V4
 =i	DataContextModelSnapshotAuthSystem.Migrations.DataContextModelSnapshot ∫:3
 77AuthSystem.MigrationsAuthSystem.Migrations ∫	D2
 e	PasswordAuthSystem.Models.AuthenticateModel.Password ªD1
 e	UsernameAuthSystem.Models.AuthenticateModel.Username ªC0
 /S		AuthenticateModelAuthSystem.Models.AuthenticateModel ª2/
 //AuthSystem.ModelsAuthSystem.Models ªV.
 -wBuildTargetModelAuthSystem.Migrations.LoginMigration.BuildTargetModel	 π!B-
 )U	LoginMigrationAuthSystem.Migrations.LoginMigration π:,
 77AuthSystem.MigrationsAuthSystem.Migrations π
@+
 c	ErrorAuthSystem.Controllers.HomeController.Error	 ¥ D*
 g	PrivacyAuthSystem.Controllers.HomeController.Privacy	 ¥@)
 c	IndexAuthSystem.Controllers.HomeController.Index	 ¥R(
 )u	HomeControllerAuthSystem.Controllers.HomeController.HomeController	 ¥E'
 g_loggerAuthSystem.Controllers.HomeController._logger ¥2B&
 )W		HomeControllerAuthSystem.Controllers.HomeController ¥<%
 99AuthSystem.ControllersAuthSystem.Controllers ¥
9$
 U	UsersAuthSystem.Helpers.DataContext.Users ∑J#
 'eOnConfiguringAuthSystem.Helpers.DataContext.OnConfiguring	 ∑!E"
 #a	DataContextAuthSystem.Helpers.DataContext.DataContext	 ∑L!
 )g_configurationAuthSystem.Helpers.DataContext._configuration ∑	+8 
 #I		DataContextAuthSystem.Helpers.DataContext ∑4
 11AuthSystem.HelpersAuthSystem.Helpers ∑4
 E	ConfigureAuthSystem.Startup.Configure	D
 /U	ConfigureServicesAuthSystem.Startup.ConfigureServices	<
 'M	ConfigurationAuthSystem.Startup.Configuration0
 A	StartupAuthSystem.Startup.Startup	'
 1		StartupAuthSystem.Startup#
 !!AuthSystemAuthSystem	D
 /U		AutoMapperProfileAuthSystem.Helpers.AutoMapperProfile ∂4
 11AuthSystem.HelpersAuthSystem.Helpers ∂D
 /U	CreateHostBuilderAuthSystem.Program.CreateHostBuilder	$*
 ;	MainAuthSystem.Program.Main	'
 1		ProgramAuthSystem.Program#
 !!AuthSystemAuthSystem
A
 %W	PasswordSaltAuthSystem.Entities.User.PasswordSalt µA
 %W	PasswordHashAuthSystem.Entities.User.PasswordHash µ3
 I	EmailAuthSystem.Entities.User.Email µ9
 O	UsernameAuthSystem.Entities.User.Username µ9
 O	LastnameAuthSystem.Entities.User.Lastname µ;
 Q	FirstnameAuthSystem.Entities.User.Firstname µ-
 C	GdAuthSystem.Entities.User.Gd µ	+
 =		UserAuthSystem.Entities.User µ6

 33AuthSystem.EntitiesAuthSystem.Entities µN	
 %q	AuthenticateAuthSystem.Controllers.AuthController.Authenticate	 ≥@
 c	IndexAuthSystem.Controllers.AuthController.Index	 ≥R
 )u	AuthControllerAuthSystem.Controllers.AuthController.AuthController	 ≥N
 %q	_authServiceAuthSystem.Controllers.AuthController._authService ≥	&B
 )W		AuthControllerAuthSystem.Controllers.AuthController ≥<
 99AuthSystem.ControllersAuthSystem.Controllers ≥B
 5K	AuthorizationServiceAuthSystem.AuthorizationService"
 !!	AuthSystemAuthSystem-
 ++	TargetFrameworkTargetFrameworkõ 4 õ Ãöb.¸∆n⁄¥t,ŒòVÊ¿Ñ>
‚
Æ
n
8
	‹	ú	Tˆ¿~FË®`ÃäRÙ∏r‚¢l6u õ õ õ õ õ õ õ õ õ õ                         p| 9Å__tagHelperAttribute_0AspNetCore.Views_Shared__ValidationScriptsPartial.__tagHelperAttribute_0 Ë!bf{
 Yo		Views_Shared__ValidationScriptsPartialAspNetCore.Views_Shared__ValidationScriptsPartial Ë$z
 !!AspNetCoreAspNetCore Ë  õ1qVerifyPasswordHashAuthSystem.Services.AuthService.VerifyPasswordHash	 Ï;  D1qCreatePasswordHashAuthSystem.Services.AuthService.CreatePasswordHash	 Ï+  Ì%e	AuthenticateAuthSystem.Services.AuthService.Authenticate	 Ï  £#c	AuthServiceAuthSystem.Services.AuthService.AuthService	 Ï  []_contextAuthSystem.Services.AuthService._context Ï  #K		AuthServiceAuthSystem.Services.AuthService Ï   ›%yAuthenticateAuthSystem.Services.IAuthorizationService.Authenticate	 Ï   à7_	IAuthorizationServiceAuthSystem.Services.IAuthorizationService Ï	   833AuthSystem.ServicesAuthSystem.Services Ï4p
 M	HtmlAspNetCore.Views_Home_Index.Html ‰8P4o
 M	JsonAspNetCore.Views_Home_Index.Json ‰6G>n
 W	ComponentAspNetCore.Views_Home_Index.Component ‰4F2m
 K	UrlAspNetCore.Views_Home_Index.Url ‰2<Zl
 ;s	ModelExpressionProviderAspNetCore.Views_Home_Index.ModelExpressionProvider ‰0WDk
 %]	ExecuteAsyncAspNetCore.Views_Home_Index.ExecuteAsync	 ‰"C:j
 -C		Views_Home_IndexAspNetCore.Views_Home_Index ‰$i
 !!AspNetCoreAspNetCore ‰6h
 Q	HtmlAspNetCore.Views_Shared_Error.Html Ê\W6g
 Q	JsonAspNetCore.Views_Shared_Error.Json ÊZG@f
 [	ComponentAspNetCore.Views_Shared_Error.Component ÊXF4e
 O	UrlAspNetCore.Views_Shared_Error.Url ÊV<\d
 ;w	ModelExpressionProviderAspNetCore.Views_Shared_Error.ModelExpressionProvider ÊTWFc
 %a	ExecuteAsyncAspNetCore.Views_Shared_Error.ExecuteAsync	 Ê"C>b
 1G		Views_Shared_ErrorAspNetCore.Views_Shared_Error Ê$a
 !!AspNetCoreAspNetCore Ê6`
 Q	HtmlAspNetCore.Views_Home_Privacy.Html Â@P6_
 Q	JsonAspNetCore.Views_Home_Privacy.Json Â>G@^
 [	ComponentAspNetCore.Views_Home_Privacy.Component Â<F4]
 O	UrlAspNetCore.Views_Home_Privacy.Url Â:<\\
 ;w	ModelExpressionProviderAspNetCore.Views_Home_Privacy.ModelExpressionProvider Â8WF[
 %a	ExecuteAsyncAspNetCore.Views_Home_Privacy.ExecuteAsync	 Â"C>Z
 1G		Views_Home_PrivacyAspNetCore.Views_Home_Privacy Â$Y
 !!AspNetCoreAspNetCore Â4X
 M	HtmlAspNetCore.Views__ViewStart.Html ‚7P4W
 M	JsonAspNetCore.Views__ViewStart.Json ‚5G>V
 W	ComponentAspNetCore.Views__ViewStart.Component ‚3F2U
 K	UrlAspNetCore.Views__ViewStart.Url ‚1<ZT
 ;s	ModelExpressionProviderAspNetCore.Views__ViewStart.ModelExpressionProvider ‚/WDS
 %]	ExecuteAsyncAspNetCore.Views__ViewStart.ExecuteAsync	 ‚"C:R
 -C		Views__ViewStartAspNetCore.Views__ViewStart ‚$Q
 !!AspNetCoreAspNetCore ‚6P
 Q	HtmlAspNetCore.Views__ViewImports.Html ·.P6O
 Q	JsonAspNetCore.Views__ViewImports.Json ·,G@N
 [	ComponentAspNetCore.Views__ViewImports.Component ·*F4M
 O	UrlAspNetCore.Views__ViewImports.Url ·(<\L
 ;w	ModelExpressionProviderAspNetCore.Views__ViewImports.ModelExpressionProvider ·&WFK
 %a	ExecuteAsyncAspNetCore.Views__ViewImports.ExecuteAsync	 ·!C>J
 1G		Views__ViewImportsAspNetCore.Views__ViewImports ·$I
 !!AspNetCoreAspNetCore ·4H
 11	MSBuildAllProjectsMSBuildAllProjects ¿\G
 YY	PkgMicrosoft_EntityFrameworkCore_ToolsPkgMicrosoft_EntityFrameworkCore_Tools øVF
 SS	PkgMicrosoft_CodeAnalysis_AnalyzersPkgMicrosoft_CodeAnalysis_Analyzers ø4E
 11	MSBuildAllProjectsMSBuildAllProjects ø0D
 --	NuGetToolVersionNuGetToolVersion ø
2C
 //	NuGetProjectStyleNuGetProjectStyle ø	6B
 33	NuGetPackageFoldersNuGetPackageFolders ø0A
 --	NuGetPackageRootNuGetPackageRoot ø2@
 //	ProjectAssetsFileProjectAssetsFile ø   ( Ä é™+•0cëF
Ó
°
T
-		î	8‹Ä$ælï7Ä‰LôRÙæ|DÂ†@ ‡ Ä                                        ]Å$
 9y__tagHelperAttribute_2AspNetCore.Views_Shared__Layout.__tagHelperAttribute_2 Á#b]Å#
 9y__tagHelperAttribute_1AspNetCore.Views_Shared__Layout.__tagHelperAttribute_1 Á"b]Å"
 9y__tagHelperAttribute_0AspNetCore.Views_Shared__Layout.__tagHelperAttribute_0 Á!bBÅ!
 5K		Views_Shared__LayoutAspNetCore.Views_Shared__Layout Á$Å 
 !!AspNetCoreAspNetCore Á5Å
 M	HtmlAspNetCore.Views_Auth_Index.Html „ ¿Z5Å
 M	JsonAspNetCore.Views_Auth_Index.Json „ æG?Å
 W	ComponentAspNetCore.Views_Auth_Index.Component „ ºF3Å
 K	UrlAspNetCore.Views_Auth_Index.Url „ ∫<[Å
 ;s	ModelExpressionProviderAspNetCore.Views_Auth_Index.ModelExpressionProvider „ ∏WDÅ
 %]	ExecuteAsyncAspNetCore.Views_Auth_Index.ExecuteAsync	 „?CÅ/Å ÅÅE__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelperAspNetCore.Views_Auth_Index.__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper „=XÅÅ sÅ+__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelperAspNetCore.Views_Auth_Index.__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper „<KÅÅ wÅ/__Microsoft_AspNetCore_Mvc_TagHelpers_ScriptTagHelperAspNetCore.Views_Auth_Index.__Microsoft_AspNetCore_Mvc_TagHelpers_ScriptTagHelper „;MÅ3Å ÅÅI__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelperAspNetCore.Views_Auth_Index.__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper „:Z[Å
 ;s__tagHelperScopeManagerAspNetCore.Views_Auth_Index.__tagHelperScopeManager „/]lÅ KÅ__backed__tagHelperScopeManagerAspNetCore.Views_Auth_Index.__backed__tagHelperScopeManager „.]eÅ
 E}__tagHelperStringValueBufferAspNetCore.Views_Auth_Index.__tagHelperStringValueBuffer „,OÅ
 /g__tagHelperRunnerAspNetCore.Views_Auth_Index.__tagHelperRunner „*WcÅ
 C{__tagHelperExecutionContextAspNetCore.Views_Auth_Index.__tagHelperExecutionContext „(aYÅ
 9q__tagHelperAttribute_4AspNetCore.Views_Auth_Index.__tagHelperAttribute_4 „%bYÅ
 9q__tagHelperAttribute_3AspNetCore.Views_Auth_Index.__tagHelperAttribute_3 „$bYÅ
 9q__tagHelperAttribute_2AspNetCore.Views_Auth_Index.__tagHelperAttribute_2 „#bYÅ
 9q__tagHelperAttribute_1AspNetCore.Views_Auth_Index.__tagHelperAttribute_1 „"bYÅ
 9q__tagHelperAttribute_0AspNetCore.Views_Auth_Index.__tagHelperAttribute_0 „!b:Å
 -C		Views_Auth_IndexAspNetCore.Views_Auth_Index „$Å

 !!AspNetCoreAspNetCore „JÅ	
 y	HtmlAspNetCore.Views_Shared__ValidationScriptsPartial.Html ËbPJÅ
 y	JsonAspNetCore.Views_Shared__ValidationScriptsPartial.Json Ë`GUÅ Å	ComponentAspNetCore.Views_Shared__ValidationScriptsPartial.Component Ë^FHÅ
 w	UrlAspNetCore.Views_Shared__ValidationScriptsPartial.Url Ë\<qÅ ;Å	ModelExpressionProviderAspNetCore.Views_Shared__ValidationScriptsPartial.ModelExpressionProvider ËZW[Å %Å		ExecuteAsyncAspNetCore.Views_Shared__ValidationScriptsPartial.ExecuteAsync	 Ë9CÅIÅ ÅÅu__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelperAspNetCore.Views_Shared__ValidationScriptsPartial.__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper Ë7ZrÅ ;Å__tagHelperScopeManagerAspNetCore.Views_Shared__ValidationScriptsPartial.__tagHelperScopeManager Ë,]ÅÅ KÅ/__backed__tagHelperScopeManagerAspNetCore.Views_Shared__ValidationScriptsPartial.__backed__tagHelperScopeManager Ë+]|Å  EÅ)__tagHelperStringValueBufferAspNetCore.Views_Shared__ValidationScriptsPartial.__tagHelperStringValueBuffer Ë)f /Å__tagHelperRunnerAspNetCore.Views_Shared__ValidationScriptsPartial.__tagHelperRunner Ë'Wz~ CÅ'__tagHelperExecutionContextAspNetCore.Views_Shared__ValidationScriptsPartial.__tagHelperExecutionContext Ë%ap} 9Å__tagHelperAttribute_1AspNetCore.Views_Shared__ValidationScriptsPartial.__tagHelperAttribute_1 Ë"b   $U †@‡Ä ¿`˛ú:œy
ô
7	è‘,åÏ°?øÉGΩg›ôP≠U                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     UÅR
 1qVerifyPasswordHashAuthSystem.Services.AuthService.VerifyPasswordHash	 Ï<UÅQ
 1qCreatePasswordHashAuthSystem.Services.AuthService.CreatePasswordHash	 Ï,HÅP
 %e	AuthenticateAuthSystem.Services.AuthService.Authenticate	 ÏFÅO
 #c	AuthServiceAuthSystem.Services.AuthService.AuthService	 ÏAÅN
 ]_contextAuthSystem.Services.AuthService._context Ï9ÅM
 #K		AuthServiceAuthSystem.Services.AuthService ÏKÅL
 qRegisterAuthSystem.Services.IAuthorizationService.Register	 ÏSÅK
 %yAuthenticateAuthSystem.Services.IAuthorizationService.Authenticate	 ÏNÅJ
 7_	IAuthorizationServiceAuthSystem.Services.IAuthorizationService Ï	6ÅI
 33AuthSystem.ServicesAuthSystem.Services Ï9Å>
 U	HtmlAspNetCore.Views_Shared__Layout.Html Á8P9Å=
 U	JsonAspNetCore.Views_Shared__Layout.Json Á6GCÅ<
 _	ComponentAspNetCore.Views_Shared__Layout.Component Á4F7Å;
 S	UrlAspNetCore.Views_Shared__Layout.Url Á2<_Å:
 ;{	ModelExpressionProviderAspNetCore.Views_Shared__Layout.ModelExpressionProvider Á0WHÅ9
 %e	ExecuteAsyncAspNetCore.Views_Shared__Layout.ExecuteAsync	 ÁHCÅÅ8 wÅ7__Microsoft_AspNetCore_Mvc_TagHelpers_ScriptTagHelperAspNetCore.Views_Shared__Layout.__Microsoft_AspNetCore_Mvc_TagHelpers_ScriptTagHelper ÁFMÅÅ7 wÅ7__Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelperAspNetCore.Views_Shared__Layout.__Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper ÁEMÅ$Å6 Å?__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_BodyTagHelperAspNetCore.Views_Shared__Layout.__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_BodyTagHelper ÁDQÅ7Å5 ÅÅQ__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelperAspNetCore.Views_Shared__Layout.__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper ÁCZÅ$Å4 Å?__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_HeadTagHelperAspNetCore.Views_Shared__Layout.__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_HeadTagHelper ÁBQ_Å3
 ;{__tagHelperScopeManagerAspNetCore.Views_Shared__Layout.__tagHelperScopeManager Á7]pÅ2 KÅ__backed__tagHelperScopeManagerAspNetCore.Views_Shared__Layout.__backed__tagHelperScopeManager Á6]jÅ1 EÅ__tagHelperStringValueBufferAspNetCore.Views_Shared__Layout.__tagHelperStringValueBuffer Á4SÅ0
 /o__tagHelperRunnerAspNetCore.Views_Shared__Layout.__tagHelperRunner Á2WhÅ/ CÅ__tagHelperExecutionContextAspNetCore.Views_Shared__Layout.__tagHelperExecutionContext Á0a_Å.
 ;{__tagHelperAttribute_12AspNetCore.Views_Shared__Layout.__tagHelperAttribute_12 Á-b_Å-
 ;{__tagHelperAttribute_11AspNetCore.Views_Shared__Layout.__tagHelperAttribute_11 Á,b_Å,
 ;{__tagHelperAttribute_10AspNetCore.Views_Shared__Layout.__tagHelperAttribute_10 Á+b]Å+
 9y__tagHelperAttribute_9AspNetCore.Views_Shared__Layout.__tagHelperAttribute_9 Á*b]Å*
 9y__tagHelperAttribute_8AspNetCore.Views_Shared__Layout.__tagHelperAttribute_8 Á)b]Å)
 9y__tagHelperAttribute_7AspNetCore.Views_Shared__Layout.__tagHelperAttribute_7 Á(b]Å(
 9y__tagHelperAttribute_6AspNetCore.Views_Shared__Layout.__tagHelperAttribute_6 Á'b]Å'
 9y__tagHelperAttribute_5AspNetCore.Views_Shared__Layout.__tagHelperAttribute_5 Á&b]Å&
 9y__tagHelperAttribute_4AspNetCore.Views_Shared__Layout.__tagHelperAttribute_4 Á%b]Å%
 9y__tagHelperAttribute_3AspNetCore.Views_Shared__Layout.__tagHelperAttribute_3 Á$b
H L ‡Ó®^;zàù	&ÕM	°x›,]¡ˆŸ•Ùâÿmº†ÑhL0=L∏'5°√—ãÜﬁx
–
U	‹	aÊæbósXP¨◊≈z*ﬁÕf™ó@ã+£
v	˝	Ç	é3Ü<&¢‰ÒŒÜ:˛E
®
/	¥	9¿hª"0Ñe
d	Î	pı|rJi[
m	Ù	y˛Ö)|J∏
å
	ò	§KûI
ﬂã£u`ºΩÌ‹!
ˆO¡∏ﬁŒÒZNÌC
Ñ
	ê	úBï7 ≤Õ
π
@˘—	≈Hì	J                     !E__tagHelperStringValueBuffer ±/__tagHelperRunner ∞ C__tagHelperExecutionContext Ø;__tagHelperAttribute_12 Æ;__tagHelperAttribute_11 ≠;__tagHelperAttribute_10 ¨9__tagHelperAttribute_9 ´9__tagHelperAttribute_8 ™9__tagHelperAttribute_7 ©9__tagHelperAttribute_6 ®9__tagHelperAttribute_5 ß9__tagHelperAttribute_4 ¶9__tagHelperAttribute_3 •9__tagHelperAttribute_2 §9__tagHelperAttribute_1 £9__tagHelperAttribute_0 ¢r View%Authenticate À!AspNetCore †˘ Html#AuthService Õ;__tagHelperScopeManager ≥$K__backed__tagHelperScopeManager ≤FÅ__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper ô8s__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper ò:w__Microsoft_AspNetCore_Mvc_TagHelpers_ScriptTagHelper óHÅ__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper ñ;__tagHelperScopeManager ï$K__backed__tagHelperScopeManager î!E__tagHelperStringValueBuffer ì/__tagHelperRunner í C__tagHelperExecutionContext ë9__tagHelperAttribute_4 ê9__tagHelperAttribute_3 è9__tagHelperAttribute_2 é9__tagHelperAttribute_1 ç9__tagHelperAttribute_0 å View_context Œ!AspNetCore äì Html â	#AuthService œ>__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_HeadTagHelper ¥HÅ__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper É;__tagHelperScopeManager Ç$K__backed__tagHelperScopeManager Å!E__tagHelperStringValueBuffer Ä/__tagHelperRunnerC__tagHelperExecutionContext~9__tagHelperAttribute_1}9__tagHelperAttribute_0|Õ Views_Shared__Validat%Authenticate –!AspNetCorezı ëVerifyPasswordHashyJ CreatePasswordHashx%Authenticatewı RAuthServicevı B_contextuı 5AuthServicetı %Authenticatesı IAuthorizationSe>__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_BodyTagHelper ∂HÅ__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper µ!AspNetCorei	p 1HtmlhJsong	9 ComponentfUrle	p -Model:w__Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper ∑!AspNetCorea	Î 1Html`Json_	¥ Component^Url]	Î -Model:w__Microsoft_AspNetCore_Mvc_TagHelpers_ScriptTagHelper ∏!AspNetCoreY
d jHtmlXJsonW
/ ComponentVUrlU
d -ModelExpressionProviderT
d ExecuteAsyncS-Views__ViewStartR!AspNetCoreQ
ﬂ lHtmlPJsonO
® ComponentNUrlM
ﬂ -ModelExpressionProviderL ExecuteAsyncK1Views__ViewImportsJ!AspNetCoreIΩƒMSBuildAllProjectsH*YPkgMicrosoft_EntityFrameworkCore_ToolsG'SPkgMicrosoft_CodeAnalysis_AnalyzersF oMSBuildAllProjectsE-NuGetToolVersionD/NuGetProjectStyleC -NuGetPackageFoldersB-NuGetPackageRootA/ProjectAssetsFile@#RestoreTool?)RestoreSuccess>'ShowRequestId=J @RequestId<J 2ErrorViewModel;] AuthSystem.Models:Down9Up8Ω YLoginMigration7Ì FAuthSystem.Migrations6!BuildModel5=DataContextModelSnapshot47AuthSystem.Migrations3Ì Password2Username1/AuthenticateModel0E >AuthSystem.Models/-BuildTargetModel.)LoginMigration-7AuthSystem.Migrations,Ñ 3Error+Privacy*Ñ Index)Ñ HomeController(_logger'≤ HomeController&9AuthSystem.Controllers%Ò ,Users$Ò "OnConfiguring#Ò DataContext")_configuration! DataContext 1AuthSystem.Helpersu NConfigure/ConfigureServicesu ConfigurationStartupStartup!AuthSystem¢ AutoMapperProfile1AuthSystem.Helpers‹ +CreateHostBuilderMainProgram!AuthSystemi dPasswordSalt%PasswordHash 
EmailUsernamei +Lastnamei FirstnameGdUser3AuthSystem.Entities
%Authenticate	Ì 
Index)AuthController%_authService)AuthController9AuthSystem.Controllers5AuthorizationService!AuthSystem   TargetFramework
	≠ rUÍ‘@¶óÇtfXJ<-ú˛Ë“º´õ~ukaN=,
˘Á’—«¿≠öëàvmcYàm5+"˛ÙÍí› ∑ÆívZ>"Ë¥—∫¢çwbPC2!
˘
Œ
¬
∂
†	∂
í

o
]
Q
E
2
+
#



	˙	Ò´	Ë	€	Œ	ƒU	ñ	Å	k	V	?	%˙„                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         1VerifyPasswordHash “7IAuthorizationService  	Html æ	Json ΩComponent ºUrl ª;ModelExpressionProvider ∫%ExecuteAsync π1Views_Shared_Errorb*YViews_Shared__ValidationScriptsPartial{5Views_Shared__Layout °1Views_Home_PrivacyZ-Views_Home_Indexj-Views_Auth_Index ã-Views__ViewStartR1Views__ViewImportsJª 	VerifRegister Ã	Users$Username1UsernameUserUrl úUrl ÜUrlmUrleUrl]UrlUUrlMUp8+	TargetFrameworkStartupStartup'ShowRequestId=#RestoreTool?)RestoreSuccess>RequestId</ProjectAssetsFile@ProgramPrivacy**YPkgMicrosoft_EntityFrameworkCore_ToolsG'SPkgMicrosoft_CodeAnalysis_AnalyzersF%PasswordSalt%PasswordHashPassword2'OnConfiguring#-NuGetToolVersionD/NuGetProjectStyleC-NuGetPackageRootA3NuGetPackageFoldersB1MSBuildAllProjectsH1MSBuildAllProjectsE;ModelExpressionProvider õ;ModelExpressionProvider Ö;ModelExpressionProviderl;ModelExpressionProviderd;ModelExpressionProvider\;ModelExpressionProviderT;ModelExpressionProviderLMain)LoginMigration7)LoginMigration-Lastname	Json û	Json àJsonoJsongJson_JsonWJsonO	Index)	Index3AuthSystem.Services …	Html ü	Html âHtmlpHtmlhHtml`HtmlXHtmlP)HomeController()HomeController&GdFirstname%ExecuteAsync ö%ExecuteAsync Ñ%ExecuteAsynck%ExecuteAsyncc%ExecuteAsync[%ExecuteAsyncS%ExecuteAsyncK)ErrorViewModel;	Error+	EmailDown9=DataContextModelSnapshot4#DataContext"#DataContext    CreatePasswordHashx/CreateHostBuilder/ConfigureServicesConfigure'ConfigurationComponent ùComponent áComponentnComponentfComponent^ComponentVComponentN-BuildTargetModel.!BuildModel5/AutoMapperProfile1CreatePasswordHash —/AuthSystem.Models:/AuthSystem.Models/   I ú ’®ãs2“°c"›∏çbDˆΩ{G¯‡ª£~Y2
‚
ß
Ä
[
9
	¯	π	v	3Ï´f!◊ù_!ﬂ†]”õ_#„∏a√}2Ô®rC‹∞Üh  ú  aÇ
  Å5  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\Sdk\Sdk.propseÇ
  Å=  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Web\Sdk\Sdk.propsÇ	  -  	appsettings.json'Ç	  E  	appsettings.Development.json)Ç	  I  	wwwroot\lib\jquery\LICENSE.txt1Ç	  Y  	wwwroot\lib\jquery\dist\jquery.min.map0Ç	  W  	wwwroot\lib\jquery\dist\jquery.min.js,Ç 	  O  	wwwroot\lib\jquery\dist\jquery.js3Å	  ]  	wwwroot\lib\jquery-validation\LICENSE.mdDÅ~	    	wwwroot\lib\jquery-validation\dist\jquery.validate.min.js@Å}	  w  	wwwroot\lib\jquery-validation\dist\jquery.validate.jsHÅ|
  Å  	wwwroot\lib\jquery-validation\dist\additional-methods.min.jsCÅ{	  }  	wwwroot\lib\jquery-validation\dist\additional-methods.js@Åz	  w  	wwwroot\lib\jquery-validation-unobtrusive\LICENSE.txtXÅy
  Å%  	wwwroot\lib\jquery-validation-unobtrusive\jquery.validate.unobtrusive.min.jsTÅx
  Å  	wwwroot\lib\jquery-validation-unobtrusive\jquery.validate.unobtrusive.js(Åw	  G  	wwwroot\lib\bootstrap\LICENSE=Åv	  q  	wwwroot\lib\bootstrap\dist\js\bootstrap.min.js.map9Åu	  i  	wwwroot\lib\bootstrap\dist\js\bootstrap.min.js9Åt	  i  	wwwroot\lib\bootstrap\dist\js\bootstrap.js.map5Ås	  a  	wwwroot\lib\bootstrap\dist\js\bootstrap.jsDÅr	    	wwwroot\lib\bootstrap\dist\js\bootstrap.bundle.min.js.map@Åq	  w  	wwwroot\lib\bootstrap\dist\js\bootstrap.bundle.min.js@Åp	  w  	wwwroot\lib\bootstrap\dist\js\bootstrap.bundle.js.map<Åo	  o  	wwwroot\lib\bootstrap\dist\js\bootstrap.bundle.js?Ån	  u  	wwwroot\lib\bootstrap\dist\css\bootstrap.min.css.map;Åm	  m  	wwwroot\lib\bootstrap\dist\css\bootstrap.min.css;Ål	  m  	wwwroot\lib\bootstrap\dist\css\bootstrap.css.map7Åk	  e  	wwwroot\lib\bootstrap\dist\css\bootstrap.cssGÅj
  Å  	wwwroot\lib\bootstrap\dist\css\bootstrap-reboot.min.css.mapBÅi	  {  	wwwroot\lib\bootstrap\dist\css\bootstrap-reboot.min.cssBÅh	  {  	wwwroot\lib\bootstrap\dist\css\bootstrap-reboot.css.map>Åg	  s  	wwwroot\lib\bootstrap\dist\css\bootstrap-reboot.cssDÅf	    	wwwroot\lib\bootstrap\dist\css\bootstrap-grid.min.css.map@Åe	  w  	wwwroot\lib\bootstrap\dist\css\bootstrap-grid.min.css@Åd	  w  	wwwroot\lib\bootstrap\dist\css\bootstrap-grid.css.map<Åc	  o  	wwwroot\lib\bootstrap\dist\css\bootstrap-grid.cssÅb	  1  	wwwroot\js\site.jsÅa	  3  	wwwroot\favicon.icoÅ`	  5  	wwwroot\css\site.css"Å_	  ;  	Views\_ViewStart.cshtml$Å^	  ?  	Views\_ViewImports.cshtml8Å]	  g  	Views\Shared\_ValidationScriptsPartial.cshtml&Å\	  C  	Views\Shared\_Layout.cshtml$Å[	  ?  	Views\Shared\Error.cshtml$ÅZ	  ?  	Views\Home\Privacy.cshtml"ÅY	  ;  	Views\Home\Index.cshtml"ÅX	  ;  	Views\Auth\Index.cshtmlÅW	  !  	Startup.cs"ÅV	  ;  	Services\AuthService.csÅU	  !  	Program.cs#ÅT	  =  	Models\ErrorViewModel.cs&ÅS	  C  	Models\AuthenticateModel.cs1ÅR	  Y  	Migrations\DataContextModelSnapshot.cs?ÅQ	  u  	Migrations\20210202153706_LoginMigration.Designer.cs6ÅP	  c  	Migrations\20210202153706_LoginMigration.cs!ÅO	  9  	Helpers\DataContext.cs'ÅN	  E  	Helpers\AutoMapperProfile.csÅM	  -  	Entities\User.cs(ÅL	  G  	Controllers\HomeController.cs(ÅK	  G  	Controllers\AuthController.cs"ÅJ	  ;  	AuthorizationService.csBÅI	  ] )bin\Release\netcoreapp3.1\AuthSystem.dllRelease|AnyCPU>ÅH	  Y %bin\Debug\netcoreapp3.1\AuthSystem.dllDebug|AnyCPU;ÅG	  m  	Microsoft.VisualStudio.Web.CodeGeneration.Design.ÅF	  S  	Microsoft.EntityFrameworkCore.Tools2ÅE	  [  	Microsoft.EntityFrameworkCore.SqlServer(ÅD	  G  	Microsoft.EntityFrameworkCore>ÅC	  s  	AutoMapper.Extensions.Microsoft.DependencyInjectionÅB	  !  	AutoMapperÅA	  )  AuthSystem.sln+	 	 / +AuthSystem.csprojRelease|Any CPU)	 	 / 'AuthSystem.csprojDebug|Any CPU    Q xÍ\ÃCº5¶
}	È	DûÅ\€0´K≥@ùTπ Q                 Å.ÇA
  ÇO  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\Microsoft.NET.Build.Extensions\Microsoft.NET.Build.Extensions.targetsÅ2Ç@
  ÇW  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Microsoft.Common.targets\ImportAfter\Microsoft.NET.Build.Extensions.targetsÅÇ?
  Ç!  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Sdks\Microsoft.Docker.Sdk\build\Microsoft.Docker.targetsÅ0Ç>
  ÇS  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Microsoft.Common.targets\ImportAfter\Microsoft.Docker.ImportAfter.targetsÅÇ=
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\NuGet\NuGet.targetsÅÇ<
  Ç1  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\v16.0\TeamTest\Microsoft.TeamTest.targetspÇ;
  ÅS  ..\..\..\..\..\WINDOWS\Microsoft.NET\Framework\v4.0.30319\Microsoft.WorkflowBuildExtensions.targetsÅÇ:
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.WorkflowBuildExtensions.targets]Ç9
  Å-  ..\..\..\..\..\WINDOWS\Microsoft.NET\Framework\v4.0.30319\Microsoft.Xaml.targetsÅÇ8
  Åu  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.Xaml.targetsÅ'Ç7
  ÇA  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\v16.0\CodeAnalysis\Microsoft.CodeAnalysis.targets~Ç6
  Åo  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.NET.props"Ç5	  9  AuthSystem.csproj.userÅÇ4
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.Common.CurrentVersion.targetsÅÇ3
  Åy  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.Common.targetsÅ"Ç2
  Ç7  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\Managed\Microsoft.Managed.DesignTime.targetsÅ!Ç1
  Ç5  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\Managed\Microsoft.CSharp.DesignTime.targetsÅÇ0
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn\Microsoft.Managed.Core.targetsÅÇ/
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn\Microsoft.CSharp.Core.targetsÅÇ.
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.CSharp.CurrentVersion.targetsÅÇ-
  Ç	  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.Managed.Before.targetsÅÇ,
  Åy  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.CSharp.targetsÅÇ+
  Åy  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.NuGetOfflineCache.targetsÅÇ*
  Å}  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.EolTargetFrameworks.targetsÅÇ)
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.RuntimeIdentifierInference.targetsÅ
Ç(
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.TargetFrameworkInference.targetsÅ
Ç'
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.ImportPublishProfile.targetsÅÇ&
  Å{  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.DefaultOutputPaths.targets   q a∏q   ,   (   (»V¥ l— i                                                             Å.Å
  ÇO  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\Microsoft.NET.Build.Extensions\Microsoft.NET.Build.Extensions.targetsÅ2Å
  ÇW  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Microsoft.Common.targets\ImportAfter\Microsoft.NET.Build.Extensions.targetsÅÅ
  Ç!  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Sdks\Microsoft.Docker.Sdk\build\Microsoft.Docker.targetsÅ0Å 
  ÇS  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Microsoft.Common.targets\ImportAfter\Microsoft.Docker.ImportAfter.targetsÅ
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\NuGet\NuGet.targetsÅ~
  Ç1  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\v16.0\TeamTest\Microsoft.TeamTest.targetsp}
  ÅS  ..\..\..\..\..\WINDOWS\Microsoft.NET\Framework\v4.0.30319\Microsoft.WorkflowBuildExtensions.targetsÅ|
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.WorkflowBuildExtensions.targets]{
  Å-  ..\..\..\..\..\WINDOWS\Microsoft.NET\Framework\v4.0.30319\Microsoft.Xaml.targetsÅz
  Åu  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.Xaml.targetsÅ'y
  ÇA  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\v16.0\CodeAnalysis\Microsoft.CodeAnalysis.targets~x
  Åo  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.NET.props"w	  9  AuthSystem.csproj.userÅv
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.Common.CurrentVersion.targetsÅu
  Åy  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.Common.targetsÅ"t
  Ç7  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\Managed\Microsoft.Managed.DesignTime.targetsÅ!s
  Ç5  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\Managed\Microsoft.CSharp.DesignTime.targetsÅr
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn\Microsoft.Managed.Core.targets  y  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Roslyn\Microsoft.CSharp.Core.targetsÅp
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.CSharp.CurrentVersion.targetsÅo
  Ç	  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.Managed.Before.targetsÅn
  Åy  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.CSharp.targetsÅm
  Åy  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.NuGetOfflineCache.targetsÅl
  Å}  ..\..\..\..\..\Program FilÅ Ç~
  Ç3  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\targets\DotNetCLIToolTargets\Microsoft.NET.Sdk.DotNetCLITool.targetsÅÇ}
  Ç1  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\targets\PublishTargets\Microsoft.NET.Sdk.Publish.FileSystem.targetsÅ%Ç|
  Ç=  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\targets\TransformTargets\Microsoft.NET.Sdk.Publish.TransformFiles.targetsÅÇ{
  Ç)  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\targets\CopyTargets\Microsoft.NET.Sdk.Publish.CopyFiles.targets    õ ÄNªu‚lË~
Ò
k	’	X›[∆L‚Q≈O¥mz™$ õ                                                                                       ÅÇ%
  Å}  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.DefaultAssemblyInfo.targetsÅÇ$
  Åw  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.BeforeCommon.targetscÇ#
  Å9  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\Sdk\Sdk.targetsgÇ"
  ÅA  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Web\Sdk\Sdk.targetsÅÇ!
  Åy  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\targets\Microsoft.NET.Sdk.Publish.propsiÇ 
  ÅE  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\Sdk\Sdk.propsÅÇ
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Web.ProjectSystem\targets\Microsoft.NET.Sdk.Web.DefaultItems.propsÅ)Ç
  ÇE  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\v16.0\TypeScript\Microsoft.TypeScript.Default.propsÅÇ
  Ç!  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Web.ProjectSystem\targets\Microsoft.NET.Sdk.Web.ProjectSystem.propssÇ
  ÅY  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Web.ProjectSystem\Sdk\Sdk.propsÅÇ
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\Sdk\Sdk.Razor.StaticAssets.ProjectSystem.propsÅÇ
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\build\netstandard2.0\Sdk.Razor.CurrentVersion.propsgÇ
  ÅA  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\Sdk\Sdk.propswÇ
  Åa  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Windows.propsÅÇ
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.WindowsDesktop\targets\Microsoft.NET.Sdk.WindowsDesktop.propsÇ
  Åq  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.PackProjectTool.propsxÇ
  Åc  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.PackTool.propszÇ
  Åg  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.CSharp.propsÅÇ
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.WindowsSdkSupportedTargetPlatforms.propsÅÇ
  Åw  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.SupportedPlatforms.propsÅ	Ç
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.SupportedTargetFrameworks.propsgÇ
  ÅA  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Microsoft.NETCoreSdk.BundledVersions.propsÅ Ç
  Ås  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.DefaultItems.propssÇ
  ÅY  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.propsÅÇ
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\NuGet\NuGet.propsÅ	Ç
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\NuGet\16.0\Microsoft.NuGet.propsÅ5Ç
  Ç]  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Imports\Microsoft.Common.props\ImportBefore\Microsoft.NuGet.ImportBefore.propsÅÇ

  Ç  ..\..\..\.nuget\packages\microsoft.entityframeworkcore.design\5.0.2\build\netcoreapp3.0\Microsoft.EntityFrameworkCore.Design.props/Ç		  S  obj\AuthSystem.csproj.nuget.g.props}Ç
  Åm  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Microsoft.Common.props    Ö ~ÌqÒÖÚR±
y	◊	0Å„9¡$}£ÒK›TÀ& Ö                                                                       ÅÇz
  Ç-  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\targets\CopyTargets\Microsoft.NET.Sdk.Publish.FilterFiles.targetsÅ!Çy
  Ç5  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\targets\ComputeTargets\Microsoft.NET.Sdk.Publish.ComputeFiles.targetsÅÇx
  Å}  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\targets\PublishProfiles\FileSystem.pubxmlÅÇw
  Å}  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\targets\Microsoft.NET.Sdk.Publish.targetskÇv
  ÅI  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Publish\Sdk\Sdk.targetsÅ"Çu
  Ç7  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\Managed.Web\Microsoft.Web.Designtime.targetsÅ.Çt
  ÇO  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\v16.0\TypeScript\Microsoft.TypeScript.DotNetCore.targetspÇs
  ÅS  ..\..\..\..\..\Program Files (x86)\Microsoft SDKs\TypeScript\4.0\build\Microsoft.TypeScript.targetsdÇr
  Å;  ..\..\..\..\..\Program Files (x86)\Microsoft SDKs\TypeScript\versions\04.00.03.00.propsÅ#Çq
  Ç9  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\v16.0\TypeScript\Microsoft.TypeScript.targetsÅÇp
  Ç%  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Web.ProjectSystem\targets\Microsoft.NET.Sdk.Web.ProjectSystem.targetsuÇo
  Å]  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Web.ProjectSystem\Sdk\Sdk.targetsÅ&Çn
  Ç?  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\Razor\Microsoft.NET.Sdk.Razor.DesignTime.targetsÅÇm
  Ç'  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\build\netstandard2.0\Microsoft.NET.Sdk.Razor.Compilation.targetsÅ+Çl
  ÇI  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\build\netstandard2.0\Microsoft.NET.Sdk.Razor.MvcApplicationPartsDiscovery.targetsÅ#Çk
  Ç9  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\build\netstandard2.0\Microsoft.NET.Sdk.Razor.GenerateAssemblyInfo.targetsÅÇj
  Ç/  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\build\netstandard2.0\Microsoft.NET.Sdk.Razor.StaticWebAssets.targetsÅÇi
  Ç#  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\build\netstandard2.0\Microsoft.NET.Sdk.Razor.ScopedCss.targetsÅÇh
  Ç#  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\build\netstandard2.0\Microsoft.NET.Sdk.Razor.Component.targetsÅÇg
  Ç-  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\build\netstandard2.0\Microsoft.NET.Sdk.Razor.CodeGeneration.targetsÅÇf
  Ç+  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\build\netstandard2.0\Microsoft.NET.Sdk.Razor.Configuration.targetsÅÇe
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\build\netstandard2.0\Sdk.Razor.CurrentVersion.targetsiÇd
  ÅE  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk.Razor\Sdk\Sdk.targets}Çc
  Åm  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\NuGet.Build.Tasks.Pack\build\NuGet.Build.Tasks.Pack.targetsyÇb
  Åe  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Windows.targetsÅÇa
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\analyzers\build\Microsoft.CodeAnalysis.NetAnalyzers.propsÇ`
  Åq  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.Analyzers.targets    ® Múˆ∂Çıçˇá
{	ı	_«B∏*©,§:æAº,§ê ®                                                                                                    jÇ_
  ÅG  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.ILLink.Tasks\Sdk\Sdk.propsxÇ^
  Åc  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.ILLink.targets|Ç]
  Åk  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.CSharp.targetsÅÇ\
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.DefaultPackageConflictOverrides.targetsÅÇ[
  Å{  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.ConflictResolution.targetsÅÇZ
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.PreserveCompilationContext.targetsÅÇY
  Åu  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.PackProjectTool.targetszÇX
  Åg  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.PackTool.targetsyÇW
  Åe  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Publish.targetsgÇV
  ÅA  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Microsoft.NETCoreSdk.BundledCliTools.propsÅÇU
  Å{  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.ObsoleteReferences.targetszÇT
  Åg  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.CrossGen.targets~ÇS
  Åo  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.ComposeStore.targetsÅ
ÇR
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.GenerateSupportedRuntime.targetsÅÇQ
  Å  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.GenerateAssemblyInfo.targetsÅÇP
  Åu  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.DesignerSupport.targetsÅÇO
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.DisableStandardFrameworkResolution.targetsÅÇN
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.FrameworkReferenceResolution.targetsÅÇM
  Åw  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.DefaultItems.targetsÅ	ÇL
  Ç  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.PackageDependencyResolution.targets|ÇK
  Åk  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.Common.targetsuÇJ
  Å]  ..\..\..\..\..\Program Files\dotnet\sdk\5.0.102\Sdks\Microsoft.NET.Sdk\targets\Microsoft.NET.Sdk.targetsÅ
ÇI
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.Managed.After.targetseÇH
  Å=  ..\..\..\..\..\WINDOWS\Microsoft.NET\Framework\v4.0.30319\Microsoft.ServiceModel.targetsÅ	ÇG
  Ç  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\Microsoft.ServiceModel.targets1ÇF	  W  obj\AuthSystem.csproj.nuget.g.targets=ÇE	  o  obj\AuthSystem.csproj.EntityFrameworkCore.targetsÅ"ÇD
  Ç7  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VisualStudio\Managed.Web\Microsoft.Web.IISSupport.targetsÅ-ÇC
  ÇM  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Microsoft.Common.targets\ImportAfter\Microsoft.Web.ImportAfter.targetsÅ/ÇB
  ÇQ  ..\..\..\..\..\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Microsoft.Common.targets\ImportAfter\Microsoft.NuGet.ImportAfter.targets   ."/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.design\\3.1.4\\lib\\netcoreapp3.1\\dotnet-aspnet-codegenerator-design.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Antiforgery.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authentication.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authentication.Cookies.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authentication.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authentication.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authentication.OAuth.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authorization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authorization.Policy.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Components.Authorization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Components.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Components.Forms.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Components.Server.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Components.Web.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Connections.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.CookiePolicy.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Cors.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Cryptography.Internal.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Cryptography.KeyDerivation.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.DataProtection.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.DataProtection.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.DataProtection.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Diagnostics.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Diagnostics.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Diagnostics.HealthChecks.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcore   /app3.1\\Microsoft.AspNetCore.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.HostFiltering.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Hosting.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Hosting.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Hosting.Server.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Html.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.Connections.Common.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.Connections.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.Features.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.HttpOverrides.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.HttpsPolicy.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Identity.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Localization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Localization.Routing.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Metadata.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.ApiExplorer.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Cors.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.DataAnnotations.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Formatters.Json.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Formatters.Xml.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Localization.dll\"",
    "/reference:\"C:\\   0Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Razor.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.RazorPages.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.TagHelpers.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.ViewFeatures.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Razor.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.aspnetcore.razor.language\\3.1.0\\lib\\netstandard2.0\\Microsoft.AspNetCore.Razor.Language.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Razor.Runtime.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.ResponseCaching.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.ResponseCaching.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.ResponseCompression.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Rewrite.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Routing.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Routing.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.HttpSys.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.IIS.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.IISIntegration.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.Kestrel.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.Kestrel.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.Kestrel.Transport.Sockets.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Session.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.SignalR.Common.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.SignalR.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.SignalR.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.SignalR.Protocols.Json.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.StaticFiles.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.WebSockets.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetC   1ore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.WebUtilities.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.csharp\\3.3.1\\lib\\netstandard2.0\\Microsoft.CodeAnalysis.CSharp.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.csharp.workspaces\\3.3.1\\lib\\netstandard2.0\\Microsoft.CodeAnalysis.CSharp.Workspaces.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.common\\3.3.1\\lib\\netstandard2.0\\Microsoft.CodeAnalysis.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.razor\\3.1.0\\lib\\netstandard2.0\\Microsoft.CodeAnalysis.Razor.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.workspaces.common\\3.3.1\\lib\\netstandard2.0\\Microsoft.CodeAnalysis.Workspaces.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\Microsoft.CSharp.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.data.sqlclient\\2.0.1\\ref\\netcoreapp3.1\\Microsoft.Data.SqlClient.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.entityframeworkcore.abstractions\\5.0.2\\lib\\netstandard2.1\\Microsoft.EntityFrameworkCore.Abstractions.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.entityframeworkcore\\5.0.2\\lib\\netstandard2.1\\Microsoft.EntityFrameworkCore.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.entityframeworkcore.relational\\5.0.2\\lib\\netstandard2.1\\Microsoft.EntityFrameworkCore.Relational.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.entityframeworkcore.sqlserver\\5.0.2\\lib\\netstandard2.1\\Microsoft.EntityFrameworkCore.SqlServer.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.caching.abstractions\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Caching.Abstractions.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.caching.memory\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Caching.Memory.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.configuration.abstractions\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Configuration.Abstractions.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.Binder.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.CommandLine.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.EnvironmentVariables.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.FileExtensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.Ini.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.Json.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.KeyPerFile.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.UserSecrets.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.Xml.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.dependencyinjection.abstractions\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Dependen   2cyInjection.Abstractions.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.dependencyinjection\\5.0.1\\lib\\netstandard2.1\\Microsoft.Extensions.DependencyInjection.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Diagnostics.HealthChecks.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Diagnostics.HealthChecks.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.FileProviders.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.FileProviders.Composite.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.FileProviders.Embedded.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.FileProviders.Physical.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.FileSystemGlobbing.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Hosting.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Hosting.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Http.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Identity.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Identity.Stores.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Localization.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Localization.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.logging.abstractions\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Logging.Abstractions.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.Configuration.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.Console.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.Debug.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.logging\\5.0.0\\lib\\netstandard2.1\\Microsoft.Extensions.Logging.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.EventLog.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.EventSource.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.TraceSource.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.ObjectPool.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Options.ConfigurationExtensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Micros   3oft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Options.DataAnnotations.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.options\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Options.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.primitives\\5.0.0\\lib\\netcoreapp3.0\\Microsoft.Extensions.Primitives.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.WebEncoders.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.identitymodel.jsonwebtokens\\5.6.0\\lib\\netstandard2.0\\Microsoft.IdentityModel.JsonWebTokens.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.identitymodel.logging\\5.6.0\\lib\\netstandard2.0\\Microsoft.IdentityModel.Logging.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.identitymodel.protocols\\5.6.0\\lib\\netstandard2.0\\Microsoft.IdentityModel.Protocols.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.identitymodel.protocols.openidconnect\\5.6.0\\lib\\netstandard2.0\\Microsoft.IdentityModel.Protocols.OpenIdConnect.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.identitymodel.tokens\\5.6.0\\lib\\netstandard2.0\\Microsoft.IdentityModel.Tokens.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.JSInterop.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Net.Http.Headers.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\Microsoft.VisualBasic.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\Microsoft.VisualBasic.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.contracts\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.Contracts.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.core\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.Core.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.entityframeworkcore\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.EntityFrameworkCore.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.templating\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.Templating.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.utils\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.Utils.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegenerators.mvc\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGenerators.Mvc.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\Microsoft.Win32.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Win32.Registry.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\mscorlib.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\netstandard.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\newtonsoft.json\\11.0.2\\lib\\netstandard2.0\\Newtonsoft.Json.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\nuget.frameworks\\4.7.0\\lib\\netstandard1.6\\NuGet.Frameworks.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.A   4pp.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.AppContext.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Buffers.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Collections.Concurrent.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Collections.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.collections.immutable\\5.0.0\\lib\\netstandard2.0\\System.Collections.Immutable.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Collections.NonGeneric.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Collections.Specialized.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.componentmodel.annotations\\5.0.0\\ref\\netstandard2.1\\System.ComponentModel.Annotations.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ComponentModel.DataAnnotations.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ComponentModel.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ComponentModel.EventBasedAsync.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ComponentModel.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ComponentModel.TypeConverter.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.composition.attributedmodel\\1.0.31\\lib\\netstandard1.0\\System.Composition.AttributedModel.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.composition.convention\\1.0.31\\lib\\netstandard1.0\\System.Composition.Convention.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.composition.hosting\\1.0.31\\lib\\netstandard1.0\\System.Composition.Hosting.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.composition.runtime\\1.0.31\\lib\\netstandard1.0\\System.Composition.Runtime.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.composition.typedparts\\1.0.31\\lib\\netstandard1.0\\System.Composition.TypedParts.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Configuration.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Console.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Data.Common.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Data.DataSetExtensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Data.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.Contracts.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.Debug.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.diagnostics.diagnosticsource\\5.0.1\\lib\\netstandard1.3\\System.Diagnostics.DiagnosticSource.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Diagnostics.EventLog.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.FileVersionInfo.dll\"",
      5 "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.Process.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.StackTrace.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.TextWriterTraceListener.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.Tools.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.TraceSource.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.Tracing.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Drawing.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Drawing.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Dynamic.Runtime.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Globalization.Calendars.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Globalization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Globalization.Extensions.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.identitymodel.tokens.jwt\\5.6.0\\lib\\netstandard2.0\\System.IdentityModel.Tokens.Jwt.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.Compression.Brotli.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.Compression.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.Compression.FileSystem.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.Compression.ZipFile.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.FileSystem.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.FileSystem.DriveInfo.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.FileSystem.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.FileSystem.Watcher.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.IsolatedStorage.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.MemoryMappedFiles.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.IO.Pipelines.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.Pipes.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.UnmanagedMemoryStream.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Linq.dll\"",
    "/refe   6rence:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Linq.Expressions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Linq.Parallel.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Linq.Queryable.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Memory.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Http.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.HttpListener.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Mail.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.NameResolution.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.NetworkInformation.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Ping.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Requests.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Security.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.ServicePoint.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Sockets.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.WebClient.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.WebHeaderCollection.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.WebProxy.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.WebSockets.Client.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.WebSockets.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Numerics.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Numerics.Vectors.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ObjectModel.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.DispatchProxy.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Emit.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Emit.ILGeneration.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Emit.Lightweight.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Ref   7lection.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Metadata.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.TypeExtensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Resources.Reader.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Resources.ResourceManager.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Resources.Writer.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.CompilerServices.Unsafe.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.CompilerServices.VisualC.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Handles.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.InteropServices.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.InteropServices.RuntimeInformation.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.InteropServices.WindowsRuntime.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Intrinsics.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Loader.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Numerics.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Serialization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Serialization.Formatters.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Serialization.Json.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Serialization.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Serialization.Xml.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Security.AccessControl.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Claims.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Cryptography.Algorithms.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Security.Cryptography.Cng.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Cryptography.Csp.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1   8\\System.Security.Cryptography.Encoding.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Cryptography.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Cryptography.X509Certificates.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Security.Cryptography.Xml.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Security.Permissions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Principal.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Security.Principal.Windows.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.SecureString.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ServiceModel.Web.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ServiceProcess.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.Encoding.CodePages.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.Encoding.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.Encoding.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.Encodings.Web.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.Json.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.RegularExpressions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Channels.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Overlapped.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Tasks.Dataflow.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Tasks.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Tasks.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Tasks.Parallel.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Thread.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.ThreadPool.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Timer.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Transactions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Transactions.Local.dll\"",
    "/reference:\"C:\\Program Files\\dotne    t\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ValueTuple.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Web.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Web.HttpUtility.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Windows.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Windows.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.Linq.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.ReaderWriter.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.Serialization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.XDocument.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.XmlDocument.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.XmlSerializer.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.XPath.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.XPath.XDocument.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\WindowsBase.dll\"",
    "/debug+",
    "/debug:portable",
    "/filealign:512",
    "/optimize-",
    "/out:obj\\Debug\\netcoreapp3.1\\AuthSystem.dll",
    "/target:exe",
    "/warnaserror-",
    "/utf8output",
    "/deterministic+",
    "/langversion:8.0",
    "/analyzer:\"C:\\Program Files\\dotnet\\sdk\\5.0.102\\Sdks\\Microsoft.NET.Sdk.Web\\analyzers\\cs\\Microsoft.AspNetCore.Analyzers.dll\"",
    "/analyzer:\"C:\\Program Files\\dotnet\\sdk\\5.0.102\\Sdks\\Microsoft.NET.Sdk.Web\\analyzers\\cs\\Microsoft.AspNetCore.Mvc.Analyzers.dll\"",
    "/analyzer:\"C:\\Program Files\\dotnet\\sdk\\5.0.102\\Sdks\\Microsoft.NET.Sdk.Web\\analyzers\\cs\\Microsoft.AspNetCore.Components.Analyzers.dll\"",
    "/analyzer:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.analyzers\\2.9.4\\analyzers\\dotnet\\cs\\Microsoft.CodeAnalysis.Analyzers.dll",
    "/analyzer:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.analyzers\\2.9.4\\analyzers\\dotnet\\cs\\Microsoft.CodeAnalysis.CSharp.Analyzers.dll",
    "/analyzer:C:\\Users\\askop\\.nuget\\packages\\microsoft.entityframeworkcore.analyzers\\5.0.2\\analyzers\\dotnet\\cs\\Microsoft.EntityFrameworkCore.Analyzers.dll",
    "AuthorizationService.cs",
    "Controllers\\AuthController.cs",
    "Controllers\\HomeController.cs",
    "Entities\\User.cs",
    "Helpers\\AutoMapperProfile.cs",
    "Helpers\\DataContext.cs",
    "Migrations\\20210202153706_LoginMigration.cs",
    "Migrations\\20210202153706_LoginMigration.Designer.cs",
    "Migrations\\DataContextModelSnapshot.cs",
    "Models\\AuthenticateModel.cs",
    "Models\\ErrorViewModel.cs",
    "Program.cs",
    "Services\\AuthService.cs",
    "Startup.cs",
    "obj\\Debug\\netcoreapp3.1\\.NETCoreApp,Version=v3.1.AssemblyAttributes.cs",
    "obj\\Debug\\netcoreapp3.1\\AuthSystem.AssemblyInfo.cs",
    "obj\\Debug\\netcoreapp3.1\\AuthSystem.RazorAssemblyInfo.cs",
    "/warnaserror+:NU1605"
  ],
  "ProjectReferences": [],
  "Configuration": "Debug",
  "TargetPath": "bin\\Debug\\netcoreapp3.1\\AuthSystem.dll",
  "BuildErrors": [],
  "BuildException": null
}Debug|AnyCPU   :\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.design\\3.1.4\\lib\\netcoreapp3.1\\dotnet-aspnet-codegenerator-design.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Antiforgery.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authentication.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authentication.Cookies.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authentication.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authentication.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authentication.OAuth.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authorization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Authorization.Policy.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Components.Authorization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Components.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Components.Forms.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Components.Server.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Components.Web.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Connections.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.CookiePolicy.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Cors.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Cryptography.Internal.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Cryptography.KeyDerivation.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.DataProtection.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.DataProtection.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.DataProtection.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Diagnostics.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Diagnostics.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Diagnostics.HealthChecks.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Micros   ;oft.AspNetCore.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.HostFiltering.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Hosting.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Hosting.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Hosting.Server.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Html.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.Connections.Common.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.Connections.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Http.Features.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.HttpOverrides.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.HttpsPolicy.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Identity.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Localization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Localization.Routing.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Metadata.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.ApiExplorer.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Cors.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.DataAnnotations.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Formatters.Json.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Formatters.Xml.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Localization.dll\"",
    "/reference:\"C:\\Program Files\   <\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.Razor.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.RazorPages.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.TagHelpers.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Mvc.ViewFeatures.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Razor.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.aspnetcore.razor.language\\3.1.0\\lib\\netstandard2.0\\Microsoft.AspNetCore.Razor.Language.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Razor.Runtime.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.ResponseCaching.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.ResponseCaching.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.ResponseCompression.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Rewrite.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Routing.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Routing.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.HttpSys.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.IIS.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.IISIntegration.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.Kestrel.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.Kestrel.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Server.Kestrel.Transport.Sockets.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.Session.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.SignalR.Common.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.SignalR.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.SignalR.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.SignalR.Protocols.Json.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.StaticFiles.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.WebSockets.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3   =.1.10\\ref\\netcoreapp3.1\\Microsoft.AspNetCore.WebUtilities.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.csharp\\3.3.1\\lib\\netstandard2.0\\Microsoft.CodeAnalysis.CSharp.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.csharp.workspaces\\3.3.1\\lib\\netstandard2.0\\Microsoft.CodeAnalysis.CSharp.Workspaces.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.common\\3.3.1\\lib\\netstandard2.0\\Microsoft.CodeAnalysis.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.razor\\3.1.0\\lib\\netstandard2.0\\Microsoft.CodeAnalysis.Razor.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.workspaces.common\\3.3.1\\lib\\netstandard2.0\\Microsoft.CodeAnalysis.Workspaces.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\Microsoft.CSharp.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.data.sqlclient\\2.0.1\\ref\\netcoreapp3.1\\Microsoft.Data.SqlClient.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.entityframeworkcore.abstractions\\5.0.2\\lib\\netstandard2.1\\Microsoft.EntityFrameworkCore.Abstractions.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.entityframeworkcore\\5.0.2\\lib\\netstandard2.1\\Microsoft.EntityFrameworkCore.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.entityframeworkcore.relational\\5.0.2\\lib\\netstandard2.1\\Microsoft.EntityFrameworkCore.Relational.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.entityframeworkcore.sqlserver\\5.0.2\\lib\\netstandard2.1\\Microsoft.EntityFrameworkCore.SqlServer.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.caching.abstractions\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Caching.Abstractions.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.caching.memory\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Caching.Memory.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.configuration.abstractions\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Configuration.Abstractions.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.Binder.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.CommandLine.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.EnvironmentVariables.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.FileExtensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.Ini.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.Json.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.KeyPerFile.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.UserSecrets.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Configuration.Xml.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.dependencyinjection.abstractions\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.DependencyInjection.Ab   >stractions.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.dependencyinjection\\5.0.1\\lib\\netstandard2.1\\Microsoft.Extensions.DependencyInjection.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Diagnostics.HealthChecks.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Diagnostics.HealthChecks.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.FileProviders.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.FileProviders.Composite.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.FileProviders.Embedded.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.FileProviders.Physical.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.FileSystemGlobbing.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Hosting.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Hosting.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Http.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Identity.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Identity.Stores.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Localization.Abstractions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Localization.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.logging.abstractions\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Logging.Abstractions.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.Configuration.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.Console.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.Debug.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.logging\\5.0.0\\lib\\netstandard2.1\\Microsoft.Extensions.Logging.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.EventLog.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.EventSource.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Logging.TraceSource.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.ObjectPool.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Options.ConfigurationExtensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore   ?.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.Options.DataAnnotations.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.options\\5.0.0\\lib\\netstandard2.0\\Microsoft.Extensions.Options.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.extensions.primitives\\5.0.0\\lib\\netcoreapp3.0\\Microsoft.Extensions.Primitives.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Extensions.WebEncoders.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.identitymodel.jsonwebtokens\\5.6.0\\lib\\netstandard2.0\\Microsoft.IdentityModel.JsonWebTokens.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.identitymodel.logging\\5.6.0\\lib\\netstandard2.0\\Microsoft.IdentityModel.Logging.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.identitymodel.protocols\\5.6.0\\lib\\netstandard2.0\\Microsoft.IdentityModel.Protocols.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.identitymodel.protocols.openidconnect\\5.6.0\\lib\\netstandard2.0\\Microsoft.IdentityModel.Protocols.OpenIdConnect.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.identitymodel.tokens\\5.6.0\\lib\\netstandard2.0\\Microsoft.IdentityModel.Tokens.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.JSInterop.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Net.Http.Headers.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\Microsoft.VisualBasic.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\Microsoft.VisualBasic.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.contracts\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.Contracts.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.core\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.Core.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.entityframeworkcore\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.EntityFrameworkCore.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.templating\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.Templating.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegeneration.utils\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGeneration.Utils.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\microsoft.visualstudio.web.codegenerators.mvc\\3.1.4\\lib\\netstandard2.0\\Microsoft.VisualStudio.Web.CodeGenerators.Mvc.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\Microsoft.Win32.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\Microsoft.Win32.Registry.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\mscorlib.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\netstandard.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\newtonsoft.json\\11.0.2\\lib\\netstandard2.0\\Newtonsoft.Json.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\nuget.frameworks\\4.7.0\\lib\\netstandard1.6\\NuGet.Frameworks.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\   @\ref\\netcoreapp3.1\\System.AppContext.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Buffers.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Collections.Concurrent.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Collections.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.collections.immutable\\5.0.0\\lib\\netstandard2.0\\System.Collections.Immutable.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Collections.NonGeneric.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Collections.Specialized.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.componentmodel.annotations\\5.0.0\\ref\\netstandard2.1\\System.ComponentModel.Annotations.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ComponentModel.DataAnnotations.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ComponentModel.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ComponentModel.EventBasedAsync.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ComponentModel.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ComponentModel.TypeConverter.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.composition.attributedmodel\\1.0.31\\lib\\netstandard1.0\\System.Composition.AttributedModel.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.composition.convention\\1.0.31\\lib\\netstandard1.0\\System.Composition.Convention.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.composition.hosting\\1.0.31\\lib\\netstandard1.0\\System.Composition.Hosting.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.composition.runtime\\1.0.31\\lib\\netstandard1.0\\System.Composition.Runtime.dll",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.composition.typedparts\\1.0.31\\lib\\netstandard1.0\\System.Composition.TypedParts.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Configuration.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Console.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Core.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Data.Common.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Data.DataSetExtensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Data.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.Contracts.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.Debug.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.diagnostics.diagnosticsource\\5.0.1\\lib\\netstandard1.3\\System.Diagnostics.DiagnosticSource.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Diagnostics.EventLog.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.FileVersionInfo.dll\"",
    "/reference:\   A"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.Process.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.StackTrace.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.TextWriterTraceListener.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.Tools.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.TraceSource.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Diagnostics.Tracing.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Drawing.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Drawing.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Dynamic.Runtime.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Globalization.Calendars.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Globalization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Globalization.Extensions.dll\"",
    "/reference:C:\\Users\\askop\\.nuget\\packages\\system.identitymodel.tokens.jwt\\5.6.0\\lib\\netstandard2.0\\System.IdentityModel.Tokens.Jwt.dll",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.Compression.Brotli.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.Compression.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.Compression.FileSystem.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.Compression.ZipFile.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.FileSystem.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.FileSystem.DriveInfo.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.FileSystem.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.FileSystem.Watcher.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.IsolatedStorage.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.MemoryMappedFiles.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.IO.Pipelines.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.Pipes.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.IO.UnmanagedMemoryStream.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Linq.dll\"",
    "/reference:\"C:\\Pr   Bogram Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Linq.Expressions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Linq.Parallel.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Linq.Queryable.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Memory.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Http.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.HttpListener.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Mail.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.NameResolution.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.NetworkInformation.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Ping.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Requests.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Security.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.ServicePoint.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.Sockets.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.WebClient.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.WebHeaderCollection.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.WebProxy.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.WebSockets.Client.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Net.WebSockets.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Numerics.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Numerics.Vectors.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ObjectModel.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.DispatchProxy.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Emit.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Emit.ILGeneration.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Emit.Lightweight.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Extens   Cions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Metadata.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Reflection.TypeExtensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Resources.Reader.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Resources.ResourceManager.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Resources.Writer.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.CompilerServices.Unsafe.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.CompilerServices.VisualC.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Handles.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.InteropServices.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.InteropServices.RuntimeInformation.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.InteropServices.WindowsRuntime.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Intrinsics.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Loader.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Numerics.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Serialization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Serialization.Formatters.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Serialization.Json.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Serialization.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Runtime.Serialization.Xml.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Security.AccessControl.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Claims.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Cryptography.Algorithms.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Security.Cryptography.Cng.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Cryptography.Csp.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Secur   Dity.Cryptography.Encoding.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Cryptography.Primitives.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Cryptography.X509Certificates.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Security.Cryptography.Xml.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Security.Permissions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.Principal.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Security.Principal.Windows.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Security.SecureString.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ServiceModel.Web.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ServiceProcess.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.Encoding.CodePages.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.Encoding.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.Encoding.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.Encodings.Web.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.Json.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Text.RegularExpressions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Channels.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Overlapped.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Tasks.Dataflow.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Tasks.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Tasks.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Tasks.Parallel.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Thread.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.ThreadPool.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Threading.Timer.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Transactions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Transactions.Local.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Micr    osoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.ValueTuple.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Web.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Web.HttpUtility.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Windows.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.AspNetCore.App.Ref\\3.1.10\\ref\\netcoreapp3.1\\System.Windows.Extensions.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.Linq.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.ReaderWriter.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.Serialization.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.XDocument.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.XmlDocument.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.XmlSerializer.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.XPath.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\System.Xml.XPath.XDocument.dll\"",
    "/reference:\"C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Ref\\3.1.0\\ref\\netcoreapp3.1\\WindowsBase.dll\"",
    "/debug+",
    "/debug:portable",
    "/filealign:512",
    "/optimize+",
    "/out:obj\\Release\\netcoreapp3.1\\AuthSystem.dll",
    "/target:exe",
    "/warnaserror-",
    "/utf8output",
    "/deterministic+",
    "/langversion:8.0",
    "/analyzer:\"C:\\Program Files\\dotnet\\sdk\\5.0.102\\Sdks\\Microsoft.NET.Sdk.Web\\analyzers\\cs\\Microsoft.AspNetCore.Analyzers.dll\"",
    "/analyzer:\"C:\\Program Files\\dotnet\\sdk\\5.0.102\\Sdks\\Microsoft.NET.Sdk.Web\\analyzers\\cs\\Microsoft.AspNetCore.Mvc.Analyzers.dll\"",
    "/analyzer:\"C:\\Program Files\\dotnet\\sdk\\5.0.102\\Sdks\\Microsoft.NET.Sdk.Web\\analyzers\\cs\\Microsoft.AspNetCore.Components.Analyzers.dll\"",
    "/analyzer:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.analyzers\\2.9.4\\analyzers\\dotnet\\cs\\Microsoft.CodeAnalysis.Analyzers.dll",
    "/analyzer:C:\\Users\\askop\\.nuget\\packages\\microsoft.codeanalysis.analyzers\\2.9.4\\analyzers\\dotnet\\cs\\Microsoft.CodeAnalysis.CSharp.Analyzers.dll",
    "/analyzer:C:\\Users\\askop\\.nuget\\packages\\microsoft.entityframeworkcore.analyzers\\5.0.2\\analyzers\\dotnet\\cs\\Microsoft.EntityFrameworkCore.Analyzers.dll",
    "AuthorizationService.cs",
    "Controllers\\AuthController.cs",
    "Controllers\\HomeController.cs",
    "Entities\\User.cs",
    "Helpers\\AutoMapperProfile.cs",
    "Helpers\\DataContext.cs",
    "Migrations\\20210202153706_LoginMigration.cs",
    "Migrations\\20210202153706_LoginMigration.Designer.cs",
    "Migrations\\DataContextModelSnapshot.cs",
    "Models\\AuthenticateModel.cs",
    "Models\\ErrorViewModel.cs",
    "Program.cs",
    "Services\\AuthService.cs",
    "Startup.cs",
    "obj\\Release\\netcoreapp3.1\\.NETCoreApp,Version=v3.1.AssemblyAttributes.cs",
    "obj\\Release\\netcoreapp3.1\\AuthSystem.AssemblyInfo.cs",
    "obj\\Release\\netcoreapp3.1\\AuthSystem.RazorAssemblyInfo.cs",
    "/warnaserror+:NU1605"
  ],
  "ProjectReferences": [],
  "Configuration": "Release",
  "TargetPath": "bin\\Release\\netcoreapp3.1\\AuthSystem.dll",
  "BuildErrors": [],
  "BuildException": null
}Release|AnyCPU   + øí]+                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           /Ç1 K	AuthSystem.RazorAssemblyInfo.cs)ÿ«ø˛ùïÌ2Ç0 Q	AuthSystem.RazorAssemblyInfo.cache)ÿ«ø˛ñ ï*Ç/ A	AuthSystem.AssemblyInfo.cs)ÿ«ø˛îF->Ç. i	.NETCoreApp,Version=v3.1.AssemblyAttributes.cs)ÿ«ø˛ê