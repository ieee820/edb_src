AUTOMAKE_OPTIONS=foreign
bin_PROGRAMS=emeralddb edb wfile
emeralddb_SOURCES=\
   pmd/pmdMain.cpp pmd/pmdTcpListener.cpp pmd/pmdOptions.cpp \
   pmd/pmd.cpp pmd/pmdEDU.cpp pmd/pmdEDUMgr.cpp pmd/pmdAgent.cpp \
   bson/src/bsonobj.cpp bson/src/util/json.cpp bson/src/oid.cpp \
   bson/src/lib/base64.cpp bson/src/lib/md5.cpp bson/src/lib/nonce.cpp \
   oss/ossSocket.cpp oss/ossPrimitiveFileOp.cpp \
   pd/pd.cpp


edb_SOURCES=\
   client/edb.cpp client/command.cpp client/commandFactory.cpp \
   bson/src/bsonobj.cpp bson/src/util/json.cpp bson/src/oid.cpp \
   bson/src/lib/base64.cpp bson/src/lib/md5.cpp bson/src/lib/nonce.cpp \
   oss/ossSocket.cpp oss/ossPrimitiveFileOp.cpp \
   pd/pd.cpp
   
wfile_SOURCES=\
   oss/ossSocket.cpp oss/ossPrimitiveFileOp.cpp \
   pd/pd.cpp \
   custom/wfile.cpp

emeralddb_CXXFLAGS=-I../boost -Ibson/src -Iinclude -D_FILE_OFFSET_BITS=64 -ggdb -Wall -O0
emeralddb_LDADD=-lpthread -lm -lboost_system -lboost_thread -lboost_program_options -lrt
emeralddb_LDFLAGS=-fPIC -rdynamic -L../boost/stage/lib -pthread


edb_CXXFLAGS=-I../boost -Ibson/src -Iinclude -D_FILE_OFFSET_BITS=64 -ggdb -Wall -O0
edb_LDADD=-lm -lboost_system -lboost_thread -lboost_program_options -lrt
edb_LDFLAGS=-fPIC -rdynamic -L../boost/stage/lib

wfile_CXXFLAGS=-I../boost -Ibson/src -Iinclude -D_FILE_OFFSET_BITS=64 -ggdb -Wall -O0
wfile_LDADD=-lpthread -lm -lboost_system -lboost_thread -lboost_program_options -lrt
wfile_LDFLAGS=-fPIC -rdynamic -L../boost/stage/lib -pthread
