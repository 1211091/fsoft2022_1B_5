cmake_minimum_required(VERSION 3.21)
project(GestaoEmpresaTester)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_HEADERS_DIR
        ../gestao_empresa/headers)
set(PROJECT_SOURCES_DIR
        ../gestao_empresa/sources)


set(PROJECT_HEADERS_EXCEPTIONS_DIR
        ${PROJECT_HEADERS_DIR}/exceptions)
set(PROJECT_SOURCES_EXCEPTIONS_DIR
        ${PROJECT_SOURCES_DIR}/exceptions)

include_directories(
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}
        ${PROJECT_SOURCES_EXCEPTIONS_DIR})

set(EXCEPTIONS_SOURCE_FILES
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InformacaoNaoExisteException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InformacaoNaoExisteException.cpp
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InformacaoDuplicadaException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InformacaoDuplicadaException.cpp
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InformacaoInvalidaException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InformacaoInvalidaException.cpp
        )

set(PROJECT_HEADERS_MODEL_DIR
        ${PROJECT_HEADERS_DIR}/model
        )
set(PROJECT_SOURCES_MODEL_DIR
        ${PROJECT_SOURCES_DIR}/model
        )
include_directories(
        ${PROJECT_HEADERS_MODEL_DIR}
        ${PROJECT_SOURCES_MODEL_DIR}
)
set(MODEL_SOURCE_FILES

        ${PROJECT_HEADERS_MODEL_DIR}/Cliente.h
        ${PROJECT_SOURCES_MODEL_DIR}/Cliente.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/ClienteContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/ClienteContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Funcionario.h
        ${PROJECT_SOURCES_MODEL_DIR}/Funcionario.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/FuncionarioContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/FuncionarioContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Nome.h
        ${PROJECT_SOURCES_MODEL_DIR}/Nome.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Produto.h
        ${PROJECT_SOURCES_MODEL_DIR}/Produto.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/ProdutoContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/ProdutoContainer.cpp
        )

set(GOOGLE_TEST_LIB
        ${PROJECT_SOURCE_DIR}/googleTestLib/googletest-main)
set(GOOGLE_TEST_LIB_INCLUDE
        ${GOOGLE_TEST_LIB}/googletest/include)

add_subdirectory(${GOOGLE_TEST_LIB})
include_directories(${GOOGLE_TEST_LIB_INCLUDE})

add_executable(
        GestaoEmpresaTester
        main.cpp
        ${MODEL_SOURCE_FILES}
        ${EXCEPTIONS_SOURCE_FILES})



target_link_libraries(GestaoEmpresaTester gtest gtest_main)