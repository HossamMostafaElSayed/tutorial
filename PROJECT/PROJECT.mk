##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PROJECT
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=D:/file_cpp/file_cpp/INCOME_TRACKER
ProjectPath            :=D:/file_cpp/file_cpp/INCOME_TRACKER/PROJECT
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=MOHAMED
Date                   :=26/12/2022
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="PROJECT.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw64/bin/windres.exe"
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := "C:/Program Files/mingw64/bin/ar.exe" rcu
CXX      := "C:/Program Files/mingw64/bin/g++.exe"
CC       := "C:/Program Files/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/COMPANY.cpp$(ObjectSuffix) $(IntermediateDirectory)/FATHER.cpp$(ObjectSuffix) $(IntermediateDirectory)/DAUGHTER.cpp$(ObjectSuffix) $(IntermediateDirectory)/FAMILY.cpp$(ObjectSuffix) $(IntermediateDirectory)/PERSON.cpp$(ObjectSuffix) $(IntermediateDirectory)/SON.cpp$(ObjectSuffix) $(IntermediateDirectory)/MOTHER.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/file_cpp/file_cpp/INCOME_TRACKER/PROJECT/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/COMPANY.cpp$(ObjectSuffix): COMPANY.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/COMPANY.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/COMPANY.cpp$(DependSuffix) -MM COMPANY.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/file_cpp/file_cpp/INCOME_TRACKER/PROJECT/COMPANY.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/COMPANY.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/COMPANY.cpp$(PreprocessSuffix): COMPANY.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/COMPANY.cpp$(PreprocessSuffix) COMPANY.cpp

$(IntermediateDirectory)/FATHER.cpp$(ObjectSuffix): FATHER.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FATHER.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/FATHER.cpp$(DependSuffix) -MM FATHER.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/file_cpp/file_cpp/INCOME_TRACKER/PROJECT/FATHER.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FATHER.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FATHER.cpp$(PreprocessSuffix): FATHER.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FATHER.cpp$(PreprocessSuffix) FATHER.cpp

$(IntermediateDirectory)/DAUGHTER.cpp$(ObjectSuffix): DAUGHTER.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DAUGHTER.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DAUGHTER.cpp$(DependSuffix) -MM DAUGHTER.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/file_cpp/file_cpp/INCOME_TRACKER/PROJECT/DAUGHTER.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DAUGHTER.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DAUGHTER.cpp$(PreprocessSuffix): DAUGHTER.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DAUGHTER.cpp$(PreprocessSuffix) DAUGHTER.cpp

$(IntermediateDirectory)/FAMILY.cpp$(ObjectSuffix): FAMILY.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FAMILY.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/FAMILY.cpp$(DependSuffix) -MM FAMILY.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/file_cpp/file_cpp/INCOME_TRACKER/PROJECT/FAMILY.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FAMILY.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FAMILY.cpp$(PreprocessSuffix): FAMILY.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FAMILY.cpp$(PreprocessSuffix) FAMILY.cpp

$(IntermediateDirectory)/PERSON.cpp$(ObjectSuffix): PERSON.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PERSON.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PERSON.cpp$(DependSuffix) -MM PERSON.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/file_cpp/file_cpp/INCOME_TRACKER/PROJECT/PERSON.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PERSON.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PERSON.cpp$(PreprocessSuffix): PERSON.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PERSON.cpp$(PreprocessSuffix) PERSON.cpp

$(IntermediateDirectory)/SON.cpp$(ObjectSuffix): SON.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SON.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SON.cpp$(DependSuffix) -MM SON.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/file_cpp/file_cpp/INCOME_TRACKER/PROJECT/SON.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SON.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SON.cpp$(PreprocessSuffix): SON.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SON.cpp$(PreprocessSuffix) SON.cpp

$(IntermediateDirectory)/MOTHER.cpp$(ObjectSuffix): MOTHER.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MOTHER.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MOTHER.cpp$(DependSuffix) -MM MOTHER.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/file_cpp/file_cpp/INCOME_TRACKER/PROJECT/MOTHER.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MOTHER.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MOTHER.cpp$(PreprocessSuffix): MOTHER.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MOTHER.cpp$(PreprocessSuffix) MOTHER.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


