target_sources(be PRIVATE
	Architecture.cpp
	Archivable.cpp
	ArchivingManagers.cpp
	Base64.cpp
	Beep.cpp
	BlockCache.cpp
	BufferedDataIO.cpp
	BufferIO.cpp
	ByteOrder.cpp
	CompressionAlgorithm.cpp
	DataIO.cpp
	DataPositionIOWrapper.cpp
	DateTime.cpp
	Flattenable.cpp
	Job.cpp
	JobQueue.cpp
	List.cpp
	Locker.cpp
	PointerList.cpp
	Referenceable.cpp
	StopWatch.cpp
	String.cpp
	StringList.cpp
	Url.cpp
	Uuid.cpp
	ZlibCompressionAlgorithm.cpp
	ZstdCompressionAlgorithm.cpp
)

UsePrivateHeaders(be support)

target_sources(be_bootstrap PRIVATE
	Architecture.cpp
	Base64.cpp
	BlockCache.cpp
	BufferedDataIO.cpp
	BufferIO.cpp
	ByteOrder.cpp
	CompressionAlgorithm.cpp
	DataIO.cpp
	DataPositionIOWrapper.cpp
	Flattenable.cpp
	Job.cpp
	JobQueue.cpp
	List.cpp
	Locker.cpp
	PointerList.cpp
	Referenceable.cpp
	StopWatch.cpp
	String.cpp
	StringList.cpp
	Uuid.cpp
	ZlibCompressionAlgorithm.cpp
	ZstdCompressionAlgorithm.cpp
)

UsePrivateHeaders(be support)
